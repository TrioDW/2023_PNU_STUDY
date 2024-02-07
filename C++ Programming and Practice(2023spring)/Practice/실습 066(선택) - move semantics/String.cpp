#include <iostream>
#include "String.h"
#include <cstring>
#include <algorithm>

String::String() : len(0), s(nullptr) {
  s = new char[len + 1];
  s[0] = '\0';
}

String::String(const char* str) : len(strlen(str)), s(nullptr) {
  s = new char[len + 1];
  memcpy(s, str, len + 1);
}

String::String(const String& str) : len(str.len), s(nullptr) {
  s = new char[len + 1];
  memcpy(s, str.s, len + 1);
}

String& String::operator=(const String& str) {
  if (this != &str) {
    delete[] s;
    len = str.len;
    s = new char[len + 1];
    memcpy(s, str.s, len + 1);
  }
  return *this;
}

String::String(String&& str) noexcept : len(str.len), s(str.s) {
  str.len = 0;
  str.s = new char[len + 1];
  str.s[0] = '\0';
}

String& String::operator=(String&& str) noexcept {
  if (this != &str) {
    delete[] s;
    len = str.len;
    s = str.s;
    str.len = 0;
    str.s = nullptr;
  }
  return *this;
}

String::~String() {
  delete[] s;
}

const char* String::data() const {
  return s;
}

char& String::at(size_t pos) {
  if (pos >= len) {
    throw std::out_of_range("out of range at index: " + std::to_string(pos) + ", but the length of String is " + std::to_string(len));
  }
  return s[pos];
}

size_t String::size() const {
  return len;
}

void String::print(const char* str) const {
  std::cout << str << ": " << s << ", size: " << len << std::endl;
}

void String::swap(String& str) {
  using std::swap;
  swap(len, str.len);
  swap(s, str.s);
}
