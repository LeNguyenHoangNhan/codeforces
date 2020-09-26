#include <iostream>

int main() {

    int gamesNum = 0;
    std::cin >> gamesNum;

    std::string buffer = std::string();
    std::cin >> buffer;

    int antonWins = 0;
    int danikWins = 0;

    for (char c : buffer) {
        if (c == 'D')
            ++danikWins;
        if (c == 'A')
            ++antonWins;
    }

    if (antonWins == danikWins) {
        std::cout << "Friendship" << std::endl;
    } else if (antonWins > danikWins) {
        std::cout << "Anton" << std::endl;
    } else {
        std::cout << "Danik" << std::endl;
    }
}