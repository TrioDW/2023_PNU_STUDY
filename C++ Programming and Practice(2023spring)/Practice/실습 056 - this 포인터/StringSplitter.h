#include <iostream>
#include <vector>
using namespace std;

class StringSplitter {

 public :
  StringSplitter(const string& myString);
  StringSplitter& trim();
  StringSplitter& removeNonAlnum();
  vector<string> split(char del);

 private :
  string Text;
};