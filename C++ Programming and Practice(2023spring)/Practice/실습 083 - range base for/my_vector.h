#include <algorithm>
#include <cstddef>
#include <initializer_list>
#include <memory>

template<typename T>
class my_vector {
 public:
  // 실습 8-2 에서 정의한 my_vector의 멤버 함수들
  // 추가 함수들 - begin(), end()
  my_vector_iterator<T> begin() {
    return my_vector_iterator<T>(_data.get());
  }

  my_vector_iterator<T> end() {
    return my_vector_iterator<T>(_data.get()+_size);
  }
 private:
  size_t _size;
  std::unique_ptr<T[]> _data;
};