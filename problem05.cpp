#include <iostream>
#include <cmath>

int main() {
    double num1, num2;

  std::cout << "Enter the first double: ";
  std::cin >> num1;
  std::cout << "Enter the second double: ";
  std::cin >> num2;

  std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
  std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
  std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
  std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
  std::cout << num1 << " % " << num2 << " = " << fmod(num1, num2) << std::endl;

    return 0;
}

