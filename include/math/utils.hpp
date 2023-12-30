/**
 * @file utils.hpp
 * @author HwanSoo Lee
 * @brief header of math.
 * @details This file contains utils for math.
 * @version 1.0.0
 * @date 2023-12-30
 * @copyright Copyright (c) 2023
 */

#ifndef LEEHWANSOO_MATH_UTILS_HPP_
#define LEEHWANSOO_MATH_UTILS_HPP_

namespace leehwansoo::math {
  /**
   * @brief Add two double values.
   * @details This function adds two double values.
   * @param lhs left hand side
   * @param rhs right hand side
   * @return double lhs + rhs
   */
auto Add(double lhs, double rhs) -> double;

/**
 * @brief Subtract two double values.
 * @details This function subtracts two double values.
 * @param lhs left hand side
 * @param rhs right hand side
 * @return double lhs - rhs
 */
auto Subtract(double lhs, double rhs) -> double;

/**
 * @brief Multiply two double values.
 * @details This function multiplies two double values.
 * @param lhs left hand side
 * @param rhs right hand side
 * @return double lhs * rhs
 */
auto Multiply(double lhs, double rhs) -> double;

/**
 * @brief Divide two double values.
 * @details This function divides two double values.
 * @param lhs left hand side
 * @param rhs right hand side
 * @return double lhs / rhs
 */
auto Divide(double lhs, double rhs) -> double;

/**
 * @brief Check if two double values are equal.
 * @details This function checks if two double values are equal.
 * @param lhs left hand side
 * @param rhs right hand side
 * @return bool lhs == rhs
 */
auto IsEqual(double lhs, double rhs) -> bool;

/**
 * @brief Check if two double values are greater.
 * @details This function checks if lhs are greater.
 * @param lhs left hand side
 * @param rhs right hand side
 * @return bool lhs > rhs
 */
auto IsGreater(double lhs, double rhs) -> bool;

/**
 * @brief Check if two double values are less.
 * @details This function checks if lhs are less.
 * @param lhs left hand side
 * @param rhs right hand side
 * @return bool lhs < rhs
 */
auto IsLess(double lhs, double rhs) -> bool;

}  // namespace leehwansoo::math

#endif
