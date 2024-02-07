#include <fstream>
#include <iostream>
using namespace std;

int main() {

  try {
    ifstream fin;
    fin.exceptions(ios_base::failbit | ios_base::badbit);
    fin.open("config.ini");
  } catch (ios_base::failure& e) {
    cout << e.what() << "\n";
  }

  try {
    ofstream fout;
    fout.exceptions(ios_base::failbit | ios_base::badbit);
    fout.open("config/config.ini");
    fout << "This is an example for the exception in C++!" << endl;
  } catch (ios_base::failure& e) {
    cout << e.what() << "\n";
  }
  return 0;
}