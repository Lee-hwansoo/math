#include "math/utils.hpp"

#include <cstdlib>
#include <ctime>
#include <cmath>

#include "gtest/gtest.h"

double GenerateRandomDouble(double min, double max) {
    double randValue = min + (max - min) * (rand() / (RAND_MAX + 1.0));

    if (rand() % 10 == 0) {
        if (rand() % 2 == 0) {
            randValue = std::numeric_limits<double>::quiet_NaN();
        } else {
            randValue = std::numeric_limits<double>::infinity();
        }
    }

    return randValue;
}

namespace leehwansoo::math {
const int numTests = 1000;
const double minValue = -1000.0;
const double maxValue = 1000.0;

TEST(MathUtils, Add) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < numTests; ++i) {
        double lhs = GenerateRandomDouble(minValue, maxValue);
        double rhs = GenerateRandomDouble(minValue, maxValue);

        if (std::isnan(lhs) || std::isnan(rhs)) {
            EXPECT_THROW(Add(lhs, rhs), std::invalid_argument);
        } else if (std::isinf(lhs) || std::isinf(rhs)) {
            EXPECT_THROW(Add(lhs, rhs), std::invalid_argument);
        } else {
            double expected = lhs + rhs;
            double actual = Add(lhs, rhs);
            EXPECT_EQ(expected, actual);
        }
    }
}

TEST(MathUtils, Subtract) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < numTests; ++i) {
        double lhs = GenerateRandomDouble(minValue, maxValue);
        double rhs = GenerateRandomDouble(minValue, maxValue);

        if (std::isnan(lhs) || std::isnan(rhs)) {
            EXPECT_THROW(Subtract(lhs, rhs), std::invalid_argument);
        } else if (std::isinf(lhs) || std::isinf(rhs)) {
            EXPECT_THROW(Subtract(lhs, rhs), std::invalid_argument);
        } else {
            double expected = lhs - rhs;
            double actual = Subtract(lhs, rhs);
            EXPECT_EQ(expected, actual);
        }
    }
}

TEST(MathUtils, Multiply) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < numTests; ++i) {
        double lhs = GenerateRandomDouble(minValue, maxValue);
        double rhs = GenerateRandomDouble(minValue, maxValue);

        if (std::isnan(lhs) || std::isnan(rhs)) {
            EXPECT_THROW(Multiply(lhs, rhs), std::invalid_argument);
        } else if (std::isinf(lhs) || std::isinf(rhs)) {
            EXPECT_THROW(Multiply(lhs, rhs), std::invalid_argument);
        } else {
            double expected = lhs * rhs;
            double actual = Multiply(lhs, rhs);
            EXPECT_EQ(expected, actual);
        }
    }
}

TEST(MathUtils, Divide) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < numTests; ++i) {
        double lhs = GenerateRandomDouble(minValue, maxValue);
        double rhs = GenerateRandomDouble(minValue, maxValue);

        if (std::isnan(lhs) || std::isnan(rhs)) {
            EXPECT_THROW(Divide(lhs, rhs), std::invalid_argument);
        } else if (std::isinf(lhs) || std::isinf(rhs)) {
            EXPECT_THROW(Divide(lhs, rhs), std::invalid_argument);
        } else if (std::abs(rhs) < std::numeric_limits<double>::epsilon()) {
            EXPECT_THROW(Divide(lhs, rhs), std::invalid_argument);
        } else {
            double expected = lhs / rhs;
            double actual = Divide(lhs, rhs);
            EXPECT_EQ(expected, actual);
        }
    }
}

TEST(MathUtils, IsEqual) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < numTests; ++i) {
        double lhs = GenerateRandomDouble(minValue, maxValue);
        double rhs = GenerateRandomDouble(minValue, maxValue);

        if (std::isnan(lhs) || std::isnan(rhs)) {
            EXPECT_THROW(IsEqual(lhs, rhs), std::invalid_argument);
        } else if (std::isinf(lhs) || std::isinf(rhs)) {
            EXPECT_THROW(IsEqual(lhs, rhs), std::invalid_argument);
        } else {
            bool expected = std::abs(lhs - rhs) < std::numeric_limits<double>::epsilon();
            bool actual = IsEqual(lhs, rhs);
            EXPECT_EQ(expected, actual);
        }
    }
}

TEST(MathUtils, IsGreater) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < numTests; ++i) {
        double lhs = GenerateRandomDouble(minValue, maxValue);
        double rhs = GenerateRandomDouble(minValue, maxValue);

        if (std::isnan(lhs) || std::isnan(rhs)) {
            EXPECT_THROW(IsGreater(lhs, rhs), std::invalid_argument);
        } else if (std::isinf(lhs) || std::isinf(rhs)) {
            EXPECT_THROW(IsGreater(lhs, rhs), std::invalid_argument);
        } else {
            bool expected = lhs > rhs;
            bool actual = IsGreater(lhs, rhs);
            EXPECT_EQ(expected, actual);
        }
    }
}

TEST(MathUtils, IsLess) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < numTests; ++i) {
        double lhs = GenerateRandomDouble(minValue, maxValue);
        double rhs = GenerateRandomDouble(minValue, maxValue);

        if (std::isnan(lhs) || std::isnan(rhs)) {
            EXPECT_THROW(IsLess(lhs, rhs), std::invalid_argument);
        } else if (std::isinf(lhs) || std::isinf(rhs)) {
            EXPECT_THROW(IsLess(lhs, rhs), std::invalid_argument);
        } else {
            bool expected = lhs < rhs;
            bool actual = IsLess(lhs, rhs);
            EXPECT_EQ(expected, actual);
        }
    }
}

}  // namespace leehwansoo::math
