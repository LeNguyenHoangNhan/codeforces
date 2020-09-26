#include <cstring>
#include <iostream>
int main() {
    char first_char[101];
    char second_char[101];

    std::cin >> first_char >> second_char;

    for (int i = 0; i < strlen(first_char); i++) {
        if (tolower(first_char[i]) > tolower(second_char[i])) {
            std::cout << 1;
            return 0;
        } else if (tolower(first_char[i]) < tolower(second_char[i])) {
            std::cout << -1;
            return 0;
        }
    }
    std::cout << 0;
}