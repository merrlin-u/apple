#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    const double current_population = 312032486;
    const int seconds_per_year = 365 * 24 * 60 * 60;

    double births_per_year = seconds_per_year / 7.0;
    double deaths_per_year = seconds_per_year / 13.0;
    double immigrants_per_year = seconds_per_year / 45.0;

    double changes = births_per_year - deaths_per_year + immigrants_per_year;
    double year1 = round(current_population + 1 * changes);
    double year2 = round(current_population + 2 * changes);
    double year3 = round(current_population + 3 * changes);
    double year4 = round(current_population + 4 * changes);
    double year5 = round(current_population + 5 * changes);

    std::cout << std::fixed << std::setprecision(0);
    std::cout << year1 <<"\n";
    std::cout << year2 << "\n";
    std::cout << year3 << "\n";
    std::cout << year4 << "\n";
    std::cout << year5 << "\n";

    return 0;
}
