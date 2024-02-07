using namespace std;

template <typename T>
class TransparentShape : public T {
 public:
  TransparentShape() = default;
  ~TransparentShape() noexcept {}

  template<typename... Args>
  TransparentShape(int transparent, Args... args) : transparent{transparent}, T(forward<Args>(args)...) { }
  string toString() const override {
    ostringstream oss;
    oss << T::toString() << ", transparent: " << transparent;
    return oss.str();
  }
 private:
  int transparent=100;
};

