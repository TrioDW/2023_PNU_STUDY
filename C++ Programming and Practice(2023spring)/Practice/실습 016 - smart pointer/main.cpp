#include <iostream>
#include <memory>
using namespace std;

void update(int* a, int* b);

int main(){

  unique_ptr <int> pa {new int{}};
  unique_ptr <int> pb {new int{}};

  cin >> *pa;
  cin >> *pb;

  update(pa.get(), pb.get());
  return 0;
}

void update(int* a, int* b){
  cout << *a + *b << "\n" << *a - *b;
}