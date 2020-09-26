#include <iostream>

int main() {
    int magnetNums = 0;
    std::cin >> magnetNums;

    int magnetGroups = 1;
    int previousMagnetStates = 0;

    std::cin >> previousMagnetStates;

    for (int magnetState = 0, i = 1; i < magnetNums; ++i) {
        std::cin >> magnetState;

        if (magnetState != previousMagnetStates) {
            magnetGroups++;
        }

        previousMagnetStates = magnetState;
    }

    std::cout << magnetGroups << std::endl;
}