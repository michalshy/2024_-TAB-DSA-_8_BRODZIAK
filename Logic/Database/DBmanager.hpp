//
// Created by lucja on 11.05.2024.
//

#ifndef DBMANAGER_HPP
#define DBMANAGER_HPP

#include<string>
#include<vector>
#include <sqlite3.h>
#include "QueryHelper.hpp"

/**
 * Controls usage of database in the application
 * Most of the functions are self-explanatory
 */
class DBmanager {
    static std::string nickName;
    static int id;

    sqlite3 *db;
    char *zErrMsg;
    int rc;
    const char* data = "Callback function called";

    int openDatabase(); ///< opens connection
    int createDatabase(); ///< creates db
    int closeDatabase(); ///< close db

    int createUserTable();
    int createAdminTable();
    int createPhraseTable();
    int createTagTable();
    int createPhraseTagTable();
public:
    bool insertUser(std::string& nickname, std::string& password);
    std::vector<std::pair<std::string,std::string>> getUsers();
    bool updateUserPassword(int id,std::string& password);
    bool deleteUser(int id);

    bool loginUser(std::string& log, std::string& pass);

    bool insertAdmin(int Id);
    std::vector<std::pair<std::string,std::string>> getAdmins();
    bool deleteAdmin(int adminId);

    bool insertPhrase(std::string &body, std::string &response);
    std::vector<std::pair<std::string,std::string>>  getPhrases();
    std::vector<std::pair<std::string,std::string>>  getPhrase(int phraseId);
    bool deletePhrase(int id);

    bool insertTag(std::string& body);
    std::vector<std::pair<std::string,std::string>> getTags();
    bool deleteTag(int id);

    bool insertFavourite(int phraseId);
    std::vector<std::pair<std::string,std::string>> getFavourites();
    bool deleteFavourite(int favId);

    bool connectTagToPhrase(int phraseId,int tagId);
    std::vector<std::pair<std::string,std::string>> getPhraseWithTag();

    DBmanager();
    ~DBmanager();
};



#endif //DBMANAGER_HPP
