#include <algorithm>
#include <initializer_list>
#include <memory>

template<typename T>
class my_vector {
 public:
  explicit my_vector(size_t N=0) noexcept ;

  my_vector(std::initializer_list<int> lst) noexcept ;

  my_vector(const my_vector<T>& other) noexcept ;

  T& operator[] (int i) ;

  size_t size() const;

 private:
  size_t _size;
  std::unique_ptr<T[]> _data;
};

template<typename T>
my_vector<T>::my_vector(size_t N) noexcept {
  _size = N;
  _data = std::make_unique<T[]> (_size);
}

template<typename T>
my_vector<T>::my_vector(std::initializer_list<int> lst) noexcept {
  _size = lst.size();
  _data = std::make_unique<T[]> (_size);
  std::copy(lst.begin(), lst.end(), _data.get());
}

template<typename T>
my_vector<T>::my_vector(const my_vector<T>& other) noexcept {
  _size = other._size;
  _data = std::unique_ptr<T[]> (new T[_size]);
  std::copy(other._data.get(), other._data.get() + _size, _data.get());
}

template<typename T>
T& my_vector<T>::operator[] (int i) {
  return _data[i];
}

template<typename T>
size_t my_vector<T>::size() const {
  return _size;
}