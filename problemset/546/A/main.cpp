#include <iostream>

int main() {
    int bananasNum = 0;
    int firstBananaPrice = 0;
    int dollarHave = 0;

    std::cin >> firstBananaPrice;
    std::cin >> dollarHave;
    std::cin >> bananasNum;

    long long dollarNeed = 0;

    for (int i = 1; i <= bananasNum; i++) {
        dollarNeed += firstBananaPrice * i;
    }

    std::cout << (dollarNeed - dollarHave <= 0 ? 0 : dollarNeed - dollarHave);
}