#include <iostream>
#include <set>
int main() {
    std::set<char> charSet;
    std::string buffer;

    std::cin >> buffer;
    for (int i = 0; i < buffer.size(); ++i) {
        charSet.insert(buffer[i]);
    }

    if (charSet.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!";
    } else {
        std::cout << "IGNORE HIM!";
    }
}