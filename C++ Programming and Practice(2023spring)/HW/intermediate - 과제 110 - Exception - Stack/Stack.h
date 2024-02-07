#include "StackException.h"
#include <iostream>
#pragma once
using namespace std;

template<typename T>
class Stack {
 public:
  Stack(int sz) : size{sz}, s{new T[sz]} { }
  ~Stack() noexcept { delete[] s; }

  Stack(const Stack& stack) = delete;
  Stack& operator = (const Stack& stack) = delete;

  void push(T c) {
    if (top == size)
      throw StackException("Stack is full!", __FILE__, __LINE__);
    else
      s[top++] = c;
  }
  T pop() {
    if (top == 0)
      throw StackException("Stack is empty!", __FILE__, __LINE__);
    else {
      T r = s[--top];
      return r;
    }
  }
  void print() const {
    for (int i = 0; i < top; i++)
      cout << s[i] << "\n";
  }

 private:
  int size = 0;
  int top = 0;
  T* s = nullptr;
} ;