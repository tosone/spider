#include <cassert>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>

#include <spdlog/spdlog.h>
#include <sqlite3.h>

#pragma once

#include <database.h>
#include <error.hpp>
#include <model.h>

const std::string CreateSentence[] = {
    "CREATE TABLE IF NOT EXISTS `users` ("
    "`id` NUMERIC NOT NULL PRIMARY KEY, "
    "`login` TEXT NOT NULL, "
    "`node_id` TEXT NOT NULL, "
    "`type` TEXT NOT NULL, "
    "`name` TEXT NOT NULL, "
    "`company` TEXT, "
    "`blog` TEXT, "
    "`location` TEXT, "
    "`email` TEXT, "
    "`hireable` NUMERIC, "
    "`bio` TEXT, "
    "`created_at` TEXT NOT NULL, "
    "`updated_at` TEXT NOT NULL, "
    "`public_gists` NUMERIC NOT NULL, "
    "`public_repos` NUMERIC NOT NULL, "
    "`following` NUMERIC NOT NULL, "
    "`followers` NUMERIC NOT NULL);",
};

const std::string QuerySentence[] = {
    "CREATE TABLE `followers` ("
    "`id` NUMERIC,"
    "`login` TEXT,"
    "`node_id` TEXT,"
    "`type` TEXT,"
    "`created_at` TEXT,"
    "`updated_at` TEXT);",
};

class DBSQ : public Database {
public:
  DBSQ(std::string);
  int initialize();
  void deinit();
  int create_user(user);
};