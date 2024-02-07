#include "StringSplitter.h"

StringSplitter::StringSplitter(std::string value): value_{std::move(value)} {}

StringSplitter &StringSplitter::trim(){
  while(!value_.empty() && value_.back() == ' ') value_.pop_back();
  int left = 0;
  while(left < value_.size() && value_[left] == ' ') ++left;
  value_ = value_.substr(left, value_.size() - left);

  return *this;
}

StringSplitter &StringSplitter::removeNonAlnum() {
  std::string answer;

  for(auto ch : value_) {
    if('a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z' || '0' <= ch && ch <= '9' || ch == ' ') answer += ch;
  }

  value_ = answer;
  return *this;
}

std::vector<std::string> StringSplitter::split(char del) {
  std::string temp;
  std::vector<std::string> answer;

  for(auto ch : value_) {
      if(ch == del) {
        if(!temp.empty()) answer.push_back(temp);
        temp = "";
      } else temp += ch;
  }

  if(!temp.empty()) answer.push_back(temp);
  return answer;
}