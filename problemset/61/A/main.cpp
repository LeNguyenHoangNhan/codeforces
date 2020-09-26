#include <iostream>

int main() {
    std::string firstNum = std::string();
    std::string secondNum = std::string();

    std::cin >> firstNum >> secondNum;

    for (int i = 0; i < firstNum.size(); ++i) {
        std::cout << (firstNum[i] == secondNum[i] ? 0 : 1);
    }
}