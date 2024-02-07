#include <stdexcept>
#include <string>
#include <sstream>
#pragma once
using namespace std;

class StackException : public std::runtime_error {
 private:
  string _msg;
  string _file_name;
  size_t _line = 0;

 public:
  StackException(const std::string& msg, const char *file, size_t line)
      : std::runtime_error(msg), _msg{msg},  _file_name(file), _line(line) {
    std::ostringstream oss;
    oss  << file << ":" << line << ":" << "Exception: " << msg << std::endl;
    _msg = oss.str();
  }
  ~StackException() noexcept {}
  const char* what() const noexcept {
    return _msg.c_str();
  }
};