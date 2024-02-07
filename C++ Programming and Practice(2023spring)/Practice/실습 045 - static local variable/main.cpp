#include <future>
#include <iostream>
#include <thread>
#include "static.h"
using namespace std;

int main() {
  promise<int> r1, r2;
  auto f1 = r1.get_future();
  auto f2 = r2.get_future();
  thread t1(&inc, move(r1));
  thread t2(&inc, move(r2));
  t1.join();
  t2.join();
  cout << f1.get() << endl;
  cout << f2.get() << endl;

  for (int i=0; i < 10; i++)
    cout << getCounter() << endl;
}
