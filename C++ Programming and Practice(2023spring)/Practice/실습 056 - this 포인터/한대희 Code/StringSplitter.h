#include <string>
#include <vector>

class StringSplitter {
 public:
  StringSplitter(std::string value);
  StringSplitter& trim();
  StringSplitter& removeNonAlnum();
  std::vector<std::string> split(char del);
 private:
  std::string value_;
};
