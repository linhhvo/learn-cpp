#include "io.h"
#include <iostream>

int readNumber() {
  int input{};

  std::cout << "Enter an integer: ";
  std::cin >> input;

  return input;
}

void writeAnswer(int input) {
  std::cout << "The sum of these two numbers is: " << input << '\n';
}
