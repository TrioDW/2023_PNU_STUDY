#include <string>
#include <sstream>

enum Color {RED, BLUE, GREEN};
class Shape {
 public:
  virtual std::string toString() const = 0;
  virtual ~Shape() noexcept {};
};

