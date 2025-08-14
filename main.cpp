// Followback Check Tool by https://github.com/sturgist
// Uses nlohmann/json library: https://github.com/nlohmann/json
// Licensed under the MIT License


#include <iostream>
#include "json.hpp"
#include <string>
#include <vector>
#include <fstream>
#include <set>
using json = nlohmann::json;


std::vector <std::string> find_followers (const json& data)
{
    std::vector <std::string> followerslist1;
    for (const auto& relationships : data)
    {
        for (const auto& person : relationships["string_list_data"]) 
        {
            followerslist1.push_back(person["value"]);
        }
    }
    return followerslist1;
}

std::vector <std::string> find_following (const json& data)
{
    std::vector <std::string> followinglist1;
    for (const auto& relationships : data["relationships_following"])
    {
        for (const auto& person : relationships["string_list_data"])
        { 
            followinglist1.push_back(person["value"]);
        }
    }

    return followinglist1;
}

std::vector <std::string> find_non_followers(const std::vector<std::string>& followers, const std::vector<std::string>& following)
{
    std::set <std::string> followers_set(followers.begin(), followers.end());
    std::vector<std::string> non_followers;

    for (const auto& person : following)
    {
        if (!followers_set.count(person))
        {
            non_followers.push_back(person);
        }
    }

    return non_followers;
}


int main(){
std::ifstream followers ("followers_1.json");
std::ifstream following ("following.json");
json data_followers = json::parse(followers);
json data_following = json::parse(following);

std::vector <std::string> followerslist = find_followers(data_followers);
std::vector <std::string> followinglist = find_following(data_following);
std::vector <std::string> non_followers = find_non_followers(followerslist, followinglist);

std::cout << "=== PARSING FOLLOWERS ===" << std::endl;
std::cout << "Found " << followerslist.size() << " followers:" << std::endl;
std::cout << "Found " << followinglist.size() << " following:" << std::endl;
std::cout << "=== NON-FOLLOWERS ===" << std::endl;
std::cout << "Found " << non_followers.size() << " non-followers:" << std::endl;
std::cout << "=========================" << std::endl;


return 0;
}