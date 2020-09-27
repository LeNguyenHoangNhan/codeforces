#include <iostream>

int main() {
    int stoneNum = 0;
    std::cin >> stoneNum;
    std::string buffer;
    std::cin >> buffer;

    int stoneToRemove = 0;

    for (int i = 0; i < buffer.size() - 1; i++) {
        if (buffer[i] == buffer[i + 1]) {
            stoneToRemove++;
        }
    }
    std::cout << stoneToRemove;
}