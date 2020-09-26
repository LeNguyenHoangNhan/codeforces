#include <cmath>
#include <iostream>
long long f(long long num) {

    if (num % 2 == 0) {
        return num / 2;
    } else {
        return ((num - 1) / 2) - num; 
    }
}

int main() {
    long long num = 0;
    std::cin >> num;
    std::cout << f(num);
}
