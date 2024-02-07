#include <iostream>

template <typename T, typename U>
U my_accumulate(T _begin, T _end, U init) {
  for(; _begin != _end; ++_begin)
    init = std::move(init) + *_begin;
  return init;
}