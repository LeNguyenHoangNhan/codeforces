#include <iostream>

int main() {
    int year = 0;
    std::cin >> year;

    int outputYear = year + 1;

    int thousandths = (outputYear / 1000) % 10;
    int hundredths = (outputYear / 100) % 10;
    int tenthths = (outputYear / 10) % 10;
    int units = (outputYear) % 10;

    while (thousandths == hundredths || thousandths == tenthths || thousandths == units || hundredths == tenthths || hundredths == units || tenthths == units) {
        outputYear++;
        thousandths = (outputYear / 1000) % 10;
        hundredths = (outputYear / 100) % 10;
        tenthths = (outputYear / 10) % 10;
        units = (outputYear) % 10;
    }
    std::cout << outputYear;
}