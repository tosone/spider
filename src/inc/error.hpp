#pragma once

enum error_code {
  UNKNOWN_REQUEST_TYPE = -1,
  REQUEST_ERROR        = -2,
  DATABASE_OPEN_ERROR  = -3,
  CONFIG_PARSE_ERROR   = -4,
  SQL_EXEC_ERROR       = -5,
  DATABASE_SQL_ERROR   = -6,
};