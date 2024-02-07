#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

String::String() {
  s = new char[1];
  s[0] = '\0';
  len = 0;
}

String::String(const char* str) {
  int temp = strlen(str);
  s = new char[temp + 1];
  memcpy(s, str, temp + 1);
  len = temp;
}

String::String(const String& str) {
  len = str.len;
  s = new char[len + 1];
  memcpy(s, str.s, len);
}

String& String::operator=(const String& str) {
  if (this != &str) {
    String temp(str);
    swap(temp);
  }
  return *this;
}

String::~String() {
  delete[] s;
}

const char* String::data() const {
  return s;
}

char& String::at(size_t a) {
  return s[a];
}


size_t String::size() const {
  return len;
}

void String::print(const char* str) const {
  cout << str << ": " << this->s << ", size: " << len << "\n";
};

void String::swap(String& str) {
  std::swap(len, str.len);
  std::swap(s, str.s);
}
