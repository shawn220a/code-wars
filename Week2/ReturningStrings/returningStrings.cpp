#include <iostream>
#include "returningStrings.hpp"

std::string greet(const std::string &n)
{
  //your code here
  std::string greeting = "Hello, " + n + " how are you doing today?";
  return greeting;
}