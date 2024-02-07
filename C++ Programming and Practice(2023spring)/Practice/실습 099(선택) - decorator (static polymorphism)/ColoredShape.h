#include "Shape.h"
#include <sstream>
using namespace std;

template <typename T>
class ColoredShape : public T {
 public:
  ColoredShape() = default;
  ~ColoredShape() noexcept {}

  template<typename... Args>
  ColoredShape(Color color, Args... args) : color{color}, T(forward<Args>(args)...) { }
  string toString() const override {
    ostringstream oss;
    oss << T::toString() << ", color: " << color;
    return oss.str();
  }
 private:
  Color color=RED;
};