#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
    std::cout << num1 << " % " << num2 << " = " << num1 % num2 << "\n";

    return 0;
}