#include <iostream>
using namespace std;

enum LogLevel {
  DEBUG = 0,
  INFO = 1,
  WARNING = 2,
  ERROR = 3
};

class Logger {
 public:
  Logger();
  static void setLogLevel(int level);
  static void debug(const string& msg, const string& tag);
  static void info(const string& msg, const string& tag);
  static void warning(const string& msg, const string& tag);
  static void error(const string& msg, const string& tag);
 private:
  static int logLevel;
};