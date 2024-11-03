#include <iostream>
#include <cmath>
int main() {
    double pi1 = sqrt(6 * (1 + 1.0 / 4 + 1.0 / 9 + 1.0 / 16 + 1.0 / 25));
    double pi2 = sqrt(6 * (1 + 1.0 / 4 + 1.0 / 9 + 1.0 / 16 + 1.0 / 25 + 1.0 / 36));
    std::cout << pi1 << std::endl;
    std::cout << pi2 << std::endl;

    return 0;

}
