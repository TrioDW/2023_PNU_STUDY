#include <iostream>
using namespace std;

enum TYPE {INT, LONG, FLOAT, DOUBLE};
TYPE getType(string type) {
  if (type == "int")
    return INT;
  else if (type == "long")
    return LONG;
  else if (type == "float")
    return FLOAT;
  else if (type == "double")
    return DOUBLE;
}

int main()
{
  string str;
  cin >> str;
  TYPE type = getType(str);

  switch (type) {
    case INT:
      cout << "INT(" << type << ")" << "\n";
      break;
    case LONG:
      cout << "LONG(" << type << ")" << "\n";
      break;
    case FLOAT:
      cout << "FLOAT(" << type << ")" << "\n";
      break;
    case DOUBLE:
      cout << "DOUBLE(" << type << ")" << "\n";
      break;
  }
  return 0;
}
