#include <iostream>

int main() {
    int stopsNum = 0;
    int currentCap = 0;
    int maxCap = 0;
    std::cin >> stopsNum;

    for (int in = 0, out = 0, i = 0; i < stopsNum; ++i) {
        std::cin >> out;
        std::cin >> in;
        currentCap -= out;
        currentCap += in;
        if (currentCap > maxCap) {
            maxCap = currentCap;
        }
    }
    std::cout << maxCap;
}