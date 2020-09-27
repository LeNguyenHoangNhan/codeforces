#include <iostream>

int main() {
    int rooms = 0;
    std::cin >> rooms;

    int availableRooms = 0;

    for (int room = 0; room < rooms; ++room) {
        int roomExistingsPeople = 0;
        std::cin >> roomExistingsPeople;

        int roomCapacity = 0;
        std::cin >> roomCapacity;

        if (roomCapacity - roomExistingsPeople >= 2) {
            ++availableRooms;
        }
    }
    std::cout << availableRooms << std::endl;
}