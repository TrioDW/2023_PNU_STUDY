#include <cstring>
#include "String.h"
using namespace std;

int String::count_ = 0;

String::String() {
  count_++;
  data_ = nullptr;
  len_ = 0;

  cout << "Default Constructor\n";
  cout << "# of String object: " << count_ << "\n";
}

String::String(const char* s) {
  count_++;
  len_ = strlen(s);
  data_ = new char[len_ + 1];
  strcpy(data_, s);

  cout << "Constructor\n";
  cout << "# of String object: " << count_ << "\n";
}

String::~String() noexcept {
  if (data_ != nullptr)
    delete[] data_;
  count_--;

  cout << "Destructor\n";
  cout << "# of String object: " << count_ << "\n";
}

String::String(const String& s) noexcept {
  count_++;
  len_ = s.len_;
  data_ = new char[len_ + 1];
  strcpy(data_, s.data_);

  cout << "Copy Constructor\n";
  cout << "# of String object: " << count_ << "\n";
}

bool String::empty() const {
  if (data_ == nullptr)
    return true;
  else if (len_ == 0)
    return true;
  else
    return false;
}

size_t String::size() const {
  return len_;
}

String& String::append(const String& str) {
  char* new_data = new char[len_ + str.len_ + 1];
  std::copy(data_, data_ + len_, new_data);
  std::copy(str.data_, str.data_ + str.len_ + 1, new_data + len_);
  len_ += str.len_;

  delete[] data_;
  data_ = new_data;

  return *this;
}

String& String::append(const char* str) {
  char* new_data = new char[len_ + strlen(str) + 1];
  std::copy(data_, data_ + len_, new_data);
  std::copy(str, str + strlen(str) + 1, new_data);
  len_ += strlen(str);

  delete[] data_;
  data_ = new_data;

  return *this;
}

const char* String::data() const {
  if (data_ == nullptr)
    return "\0";
  else
    return data_;
}