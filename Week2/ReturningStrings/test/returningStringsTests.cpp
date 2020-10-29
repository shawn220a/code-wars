#include <gtest/gtest.h>

#include "../returningStrings.hpp"

TEST(ReturningStringsTests, BasicTests)
{
  ASSERT_EQ(greet("Ryan"), "Hello, Ryan how are you doing today?");
  ASSERT_EQ(greet("Shingles"), "Hello, Shingles how are you doing today?");
}