#include "count_divisors.h"
#include "gtest/gtest.h"

using count_divisors::countDivisibleInRange;
using count_divisors::InclusiveRange;

TEST(CountDivisors, standardExample) {
  EXPECT_EQ(3, countDivisibleInRange(3, {1, 10}));
}
