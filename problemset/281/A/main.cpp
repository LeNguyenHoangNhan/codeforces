#include <iostream>

int main() {
    std::string buffer;

    std::cin >> buffer;

    buffer[0] = (buffer[0] <= 'Z' && buffer[0] >= 'A') ? buffer[0] : buffer[0] - 32;

    std::cout << buffer;
}