#include "StringSplitter.h"
#include <regex>
#include <vector>
#include <sstream>
using namespace std;

StringSplitter::StringSplitter(const string& myString) : Text(myString) {}

//StringSplitter& StringSplitter::trim() {
//
//  Text.erase(0, Text.find_first_not_of(" \r\n\t\v\f"));
//  Text.erase(Text.find_last_not_of(" \r\n\t\v\f") + 1);
//  return *this;
//}

StringSplitter& StringSplitter::trim() {
  auto first = Text.find_first_not_of(" \r\n\t\v\f");
  if (first != string::npos) {
    Text.erase(0, first);
  }
  auto last = Text.find_last_not_of(" \r\n\t\v\f");
  if (last != string::npos) {
    Text.erase(last + 1);
  }
  return *this;
}

StringSplitter& StringSplitter::removeNonAlnum() {

  Text = regex_replace(Text, regex("[,!]+"), "");
  return *this;
}

//vector<string> StringSplitter::split(char del){
//
//  vector<string> tokens;
//  stringstream ss(Text);
//  string token;
//  while (getline(ss, token, del)) {
//    tokens.push_back(token);
//  }
//
//  return move(tokens);
//}

vector<string> StringSplitter::split(char del) {
  vector<string> tokens;
  stringstream ss(Text);
  string token;
  while (std::getline(ss, token, del)) {
    tokens.emplace_back(token);
  }
  return tokens;
}




