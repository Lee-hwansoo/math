#include "math/utils.hpp"

#include <cmath>
#include <stdexcept>

namespace leehwansoo::math {

auto CheckForNaNInf(double value, const std::string& errorMsg) -> void {
  if (std::isnan(value) || std::isinf(value)) {
    throw std::invalid_argument(errorMsg);
  }
}

auto Add(double lhs, double rhs) -> double {
  CheckForNaNInf(lhs, "NaN in lhs");
  CheckForNaNInf(rhs, "NaN in rhs");
  return lhs + rhs;
}

auto Subtract(double lhs, double rhs) -> double {
  CheckForNaNInf(lhs, "NaN in lhs");
  CheckForNaNInf(rhs, "NaN in rhs");
  return lhs - rhs;
}

auto Multiply(double lhs, double rhs) -> double {
  CheckForNaNInf(lhs, "NaN in lhs");
  CheckForNaNInf(rhs, "NaN in rhs");
  return lhs * rhs;
}

auto Divide(double lhs, double rhs) -> double {
  CheckForNaNInf(lhs, "NaN in lhs");
  CheckForNaNInf(rhs, "NaN in rhs");
  if (rhs == 0.0) {
    throw std::invalid_argument("Division by zero");
  }
  return lhs / rhs;
}

auto IsEqual(double lhs, double rhs) -> bool {
  CheckForNaNInf(lhs, "NaN in lhs");
  CheckForNaNInf(rhs, "NaN in rhs");
  return std::abs(lhs - rhs) < std::numeric_limits<double>::epsilon();
}

auto IsGreater(double lhs, double rhs) -> bool {
  CheckForNaNInf(lhs, "NaN in lhs");
  CheckForNaNInf(rhs, "NaN in rhs");
  return lhs > rhs;
}

auto IsLess(double lhs, double rhs) -> bool {
  CheckForNaNInf(lhs, "NaN in lhs");
  CheckForNaNInf(rhs, "NaN in rhs");
  return lhs < rhs;
}

}  // namespace leehwansoo::math
