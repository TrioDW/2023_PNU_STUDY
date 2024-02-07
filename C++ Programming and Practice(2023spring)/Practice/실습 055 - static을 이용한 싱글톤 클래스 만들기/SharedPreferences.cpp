#include <iostream>
#include <thread>
#include <algorithm>
#include "SharedPreferences.h"
#include "WorkerThread.h"
using namespace std;

SharedPreferences& SharedPreferences::getInstance() {
  static SharedPreferences instance;
  return instance;
}

void SharedPreferences::putInt(std::string key, int value) {
  preferences[key] = value;
}

int SharedPreferences::getInt(std::string key) {
  auto it = preferences.find(key);
  if (it != preferences.end()) {
    return it->second;
  }
  return 0;
}

size_t SharedPreferences::size() {
  return preferences.size();
}