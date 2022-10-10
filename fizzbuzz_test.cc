#include <gtest/gtest.h>
#include "fizzbuzz.c"

TEST(FizzBuzzTest, BasicAssertions) {
  EXPECT_EQ(printFizzBuzz(1), "1");
  EXPECT_EQ(printFizzBuzz(2), "2");
  EXPECT_EQ(printFizzBuzz(3), "fizz");
  EXPECT_EQ(printFizzBuzz(5), "buzz");
  EXPECT_EQ(printFizzBuzz(6), "fizz");
  EXPECT_EQ(printFizzBuzz(10), "buzz");
  EXPECT_EQ(printFizzBuzz(12), "fizz");
  EXPECT_EQ(printFizzBuzz(15), "fizzbuzz");
  EXPECT_EQ(printFizzBuzz(30), "fizzbuzz");
}






