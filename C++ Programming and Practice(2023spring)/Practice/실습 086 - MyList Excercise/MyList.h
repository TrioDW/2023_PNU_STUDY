#include <cstddef>

template<typename T, size_t N>
class MyList {
 public:
  MyList();
  MyList(const MyList& rhs) noexcept;
  MyList& operator=(const MyList& rhs);
  ~MyList() noexcept;

  void add(T& data);
  void remove(T& data);

  const T* begin() const {return _data;}
  const T* end() const {return _data + N;}

  T* begin() {return _data;}
  T* end() {return _data + N;}

 private:
  T* _data= nullptr;
  int pos = 0;
};

template<typename T, size_t N>
MyList<T, N>::MyList() {
  _data = new T[N] { };
  pos = 0;
}

template<typename T, size_t N>
MyList<T, N>::~MyList() noexcept {
  delete[] _data;
}


template<typename T, size_t N>
MyList<T, N>::MyList(const MyList& rhs) noexcept {
  _data = new T[N];
  std::copy(rhs.begin(), rhs.end(), _data);
  pos = rhs.pos;
}

template<typename T, size_t N>
MyList<T, N>& MyList<T, N>::operator = (const MyList& rhs) {
  if (this != &rhs) {
    delete[] _data;
    _data = new T[N];
    std::copy(rhs.begin(), rhs.end(), _data);
    pos = rhs.pos;
  }
  return *this;
}


template<typename T, size_t N>
void MyList<T, N>::add(T& data) {
  T* tmp = new T[N];
  std::copy(_data, _data + pos, tmp);
  tmp[pos] = data;
  delete[] _data;
  _data = tmp;
  pos++;
}

template<typename T, size_t N>
void MyList<T, N>::remove(T& data) {
  T* tmp = new T[N];
  int i = 0;
  for(T* now = this->begin() ; now != this->end() ; now++) {
    if(*now != data)
      tmp[i++] = *now;
  }
  delete[] _data;
  _data = tmp;
  pos--;
}