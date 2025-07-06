#include <iostream>

double getNum() {
  double num{};
  std::cout << "Enter a double value: ";
  std::cin >> num;
  return num;
}

int main() {
  double num1{getNum()};
  double num2{getNum()};

  char op{};
  std::cout << "Enter +, -, *, /: ";
  std::cin >> op;

  double res{};

  if (op == '+')
    res = num1 + num2;
  else if (op == '-')
    res = num1 - num2;
  else if (op == '*')
    res = num1 * num2;
  else if (op == '/')
    res = num1 / num2;
  else
    return 0;

  std::cout << num1 << ' ' << op << ' ' << num2 << " is " << res << '\n';

  return 0;
}
