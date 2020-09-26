#include <iostream>

int main() {
    int statementCount = 0;
    int xValue = 0;
    char buffer[4];
    std::cin >> statementCount;

    for (int i = 0; i < statementCount; ++i) {
        std::cin >> buffer;
        if (buffer[1] == '+') {
            xValue++;
        } else {
            xValue--;
        }
    }
    std::cout << xValue;
}