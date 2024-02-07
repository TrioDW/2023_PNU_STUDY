#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

String::String() : len(0), s(nullptr) {}

void String::swap(String& str) {
  std::swap(len, str.len);
  std::swap(s, str.s);
}

String::~String() noexcept {
  if (s != nullptr) {
    delete[] s;
  }
  cout << "Destructor\n";
}

String::String(const String& str) : len(str.len) {
  s = new char[len + 1];
  memcpy(s, str.s, len + 1);
}

String::String(const char* str) {
  int temp = strlen(str);
  s = new char[temp + 1];
  memcpy(s, str, temp + 1);
  len = temp;
}

char& String::at(size_t a) {
  return s[a];
}

String& String::operator=(const String& str) {
  if (this != &str) {
    len = str.len;
    s = new char[len + 1];
    memcpy(s, str.s, len + 1);
  }
  return *this;
}

void String::print(const char* str) const {
  cout << str << ": " << this->s << ", size: " << len << "\n";
};