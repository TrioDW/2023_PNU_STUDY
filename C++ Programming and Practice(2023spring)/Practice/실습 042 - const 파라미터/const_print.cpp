#include <iostream>
using namespace std;

void println(string str);

int main() {
  string str = "hello, world!";

  println(str);
  const string str1 = str;

  for (int i = 0; i < 3; i++)
    println(str);

  return 0;
}

void println(string str) {
  str.push_back('\n');
  cout << str;
}
