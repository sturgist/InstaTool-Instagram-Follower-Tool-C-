# 📱 InstaTool - Instagram Follower Analysis Tool

[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://en.cppreference.com/w/cpp/17)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)]()

A modern C++ tool for analyzing Instagram follower relationships. Find out who doesn't follow you back, track your follower growth, and analyze your Instagram connections.

**Inspired by:** [Elieissi's Python script](https://github.com/Elieissi/ig-followback-check) ✨  
**Created by:** [sturgist](https://github.com/sturgist) 🚀

---

## ✨ Features

- 🔍 **Find Non-Followers**: See who you follow but doesn't follow you back
- 📊 **Follower Statistics**: Get detailed counts and analytics
- ⚡ **Fast Processing**: C++ performance for large datasets
- 📱 **Instagram Data**: Works with official Instagram data exports
- 🔧 **Easy Setup**: Simple compilation and usage
- 💾 **JSON Parsing**: Uses industry-standard nlohmann/json library

---

## � Quick Start

### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- Instagram data export (JSON format)

### Installation
```bash
# Clone the repository
git clone https://github.com/sturgist/InstaTool.git
cd InstaTool

# Compile the program
g++ main.cpp -Wall -std=c++17 -o InstaTool

# Run the analysis
./InstaTool
```

---

## 📖 Usage Guide

### 1. **Export Your Instagram Data**
1. Go to **Instagram** → **Settings** → **Account Center** → **Your Information and Permissions** → **Export your information** → **Create Export** → **Export To Device**
2. **Select These Settings**
    -- Click Customize Information and select ONLY Followers and following
    -- Date Range ALL TIME
    -- JSON FORMAT (not HTML)
    -- Quality Normal (Medium)
3. Wait for Instagram to accept and refresh page to download (Around 5 mins or less)
4. Download and extract the ZIP file

### 2. **Locate Required Files**
Find these files in your Instagram data export:
- `followers_1.json` - Your followers list
- `following.json` - People you follow
Now place these in same directory as InstaTool script

### 3. **Run the Analysis**
```bash
# Place JSON files in the same directory as InstaTool
./InstaTool

# Output example:
=== PARSING FOLLOWERS ===
Found 1480 followers:
Found 2540 following:
=== NON-FOLLOWERS ===
Found 1471 non-followers:
=========================
```

---

## 🔧 Development Setup

### Build Options
```bash
# Standard build
g++ main.cpp -std=c++17 -o InstaTool

# Debug build
g++ main.cpp -std=c++17 -g -Wall -Wextra -o InstaTool_debug

# Optimized release build
g++ main.cpp -std=c++17 -O3 -DNDEBUG -o InstaTool
```

---

## 📊 Sample Output

```
=== PARSING FOLLOWERS ===
Found 1480 followers:
Found 2540 following:
=== NON-FOLLOWERS ===
Found 1471 non-followers:
=========================
```

---

## 🛠️ Technical Details

- **Language**: C++17
- **JSON Library**: [nlohmann/json](https://github.com/nlohmann/json) (MIT License)
- **Platforms**: Windows, Linux, macOS
- **Dependencies**: Standard C++ library only

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/amazing-feature`)
3. **Commit** your changes (`git commit -m 'Add amazing feature'`)
4. **Push** to the branch (`git push origin feature/amazing-feature`)
5. **Open** a Pull Request

### Ideas for Contributions
- Add follower growth tracking over time
- Export results to CSV/Excel
- GUI interface using Qt or Dear ImGui
- Web dashboard for results visualization
- Support for other social media platforms

---

## 📝 License

This project is licensed under the MIT License

### Third-Party Libraries
- **nlohmann/json**: MIT License - JSON for Modern C++

---

## ⚠️ Disclaimer

This tool is for educational and personal use only. Always respect Instagram's Terms of Service and privacy policies. Use responsibly and don't spam or harass other users.

---

## 📞 Support

- **Creator**: [@sturgist](https://github.com/sturgist)

---

**⭐ If this tool helped you, please give it a star on GitHub!**

