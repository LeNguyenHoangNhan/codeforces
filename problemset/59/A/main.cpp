#include <iostream>

int main() {
    std::string word;

    std::cin >> word;

    long long uppercase = 0;

    // count the uppercase letters
    for (char c : word) {
        if (c >= 'A' && c <= 'Z') {
            ++uppercase;
        }
    }

    if (uppercase > word.size() - uppercase) {
        // there are more uppercase than lowercase so we print all in uppercase
        for (char c : word) {
            if (c >= 'a' && c <= 'z') {
                std::cout << (char)(c - 32);
            } else {
                std::cout << c;
            }
        }

    } else {
        for (char c : word) {
            if (c >= 'A' && c <= 'Z') {
                std::cout << (char)(c + 32);
            } else {
                std::cout << c;
            }
        }
    }
}