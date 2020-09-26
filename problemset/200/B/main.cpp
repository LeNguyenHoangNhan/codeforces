#include <iostream>

int main() {
    int drinks = 0;
    std::cin >> drinks;
    // assuming that he take each drink 1ml
    double orangeJuice = 0;

    for (int i = 0, buffer = 0; i < drinks; i++) {
        std::cin >> buffer;
        orangeJuice += (double)buffer / 100;
    }

    std::cout << (double)orangeJuice / drinks * 100;
}