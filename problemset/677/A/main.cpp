#include <iostream>

int main() {
    int friendNum = 0;
    std::cin >> friendNum;

    int fenceHeight = 0;
    std::cin >> fenceHeight;

    long long lineLen = 0;

    for (int index = 0, friendHeight = 0; index < friendNum; ++index) {
        std::cin >> friendHeight;

        if (friendHeight <= fenceHeight) {
            lineLen++;
        } else {
            lineLen += 2;
        }
    }

    std::cout << lineLen << std::endl;
}