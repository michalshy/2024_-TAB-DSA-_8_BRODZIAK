//
// Created by lucja on 11.05.2024.
//

#include "DBmanager.hpp"

std::string DBmanager::nickName = "placeholder";

void DBmanager::setNickName(std::string& nick) {
    DBmanager::nickName = nick;
}

bool DBmanager::registerMember(std::string &log, std::string &email, std::string &pass) {
    return false;
}

 std::string DBmanager::getNickName() {
     return  DBmanager::nickName;
 }

std::vector<std::string> DBmanager::getTags() {
    std::vector<std::string> tags;
    // logic to do
    return tags;
}

std::vector<std::string> DBmanager::getMembers() {
    std::vector<std::string> members;
    // logic to do
    return members;
}

std::vector<std::string> DBmanager::getFavourites() {
    std::vector<std::string> favs;
    // logic to do
    return favs;
}

std::vector<std::string> DBmanager::getHistory() {
    std::vector<std::string> history;
    // logic to do
    return history;
}
