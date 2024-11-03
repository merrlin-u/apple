#include <iostream>
#include <iomanip>

int main()
{
    double p1 = 5, p2 = 10, p3 = 25, p4 = 50;
    double p1_5 = p1 * 5, p2_5 = p2 * 5, p3_5 = p3 * 5, p4_5 = p4 * 5;
    double p1_10 = p1 * 10, p2_10 = p2 * 10, p3_10 = p3 * 10, p4_10 = p4 * 10;

    // Заголовки
    std::cout << std::setw(6) << std::left << "p";
    std::cout << std::setw(5) << std::right << "p*5";
    std::cout << std::setw(9) << std::right << "p*10" << std::endl;
    // Данные для p1
    std::cout << std::setw(6) << std::left << p1;
    std::cout << std::setw(5) << std::right << p1_5;
    std::cout << std::setw(9) << std::right << p1_10 << std::endl;

    // Данные для p2
    std::cout << std::setw(6) << std::left << p2;
    std::cout << std::setw(5) << std::right << p2_5;
    std::cout << std::setw(9) << std::right << p2_10 << std::endl;

    // Данные для p3
    std::cout << std::setw(6) << std::left << p3;
    std::cout << std::setw(5) << std::right << p3_5;
    std::cout << std::setw(9) << std::right << p3_10 << std::endl;

    // Данные для p4
    std::cout << std::setw(6) << std::left << p4;
    std::cout << std::setw(5) << std::right << p4_5;
    std::cout << std::setw(9) << std::right << p4_10 << std::endl;

    return 0;
}