/**
 * @file hello.cpp
 * @author Daniel Rahme
 * @date 2019-04-29
 * @brief A hello world program.
 */

#include <functions.hpp>
#include <iostream>

int main() {
  func::print_hello("World");

  constexpr auto f = [] { std::cout << "Just a lambda\n"; };
  f();

  std::cout << "Square of 3 == " << func::square(3) << '\n';
}
