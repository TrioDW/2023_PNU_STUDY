#include <stddef.h>

class String {
 public:
  String();
  String(const char* str);
  String(const String& str);
  String& operator=(const String& str);
  ~String() noexcept;
  char& at(size_t);
  void print(const char* str="") const;

 private:
  void swap(String& str);
  int len;
  char* s;
};