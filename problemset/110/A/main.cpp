#include <iostream>

int main() {

    long long sevenAndFour = 0;
    std::string buf;
    std::cin >> buf;

    for (char word : buf) {
        if (word == '7' || word == '4') {
            ++sevenAndFour;
        }
    }
    if (sevenAndFour == 0) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    for (; sevenAndFour > 0; sevenAndFour /= 10) {
        int digit = sevenAndFour % 10;
        if (digit == 7 || digit == 4) {
            continue;
        } else {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
}