#include "Logger.h"

int Logger::logLevel = 1;

void Logger::setLogLevel(int level) {
  logLevel = level;
}

void Logger::debug(const string& msg, const string& tag) {
  if (logLevel <= DEBUG)
    cout << "[DEBUG][" << tag << "] " << msg << "\n";
}

void Logger::info(const string& msg, const string& tag) {
  if (logLevel <= INFO)
    cout << "[INFO][" << tag << "] " << msg << "\n";
}

void Logger::warning(const string& msg, const string& tag) {
  if (logLevel <= WARNING)
    cout << "[WARNING][" << tag << "] " << msg << "\n";
}

void Logger::error(const string& msg, const string& tag) {
  if (logLevel <= ERROR)
    cout << "[ERROR][" << tag << "] " << msg << "\n";
}