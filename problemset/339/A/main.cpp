#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string equation;
    std::cin >> equation;
    std::vector<int> nums;

    std::stringstream ss(equation);
    std::string intermediate;

    while (getline(ss, intermediate, '+')) {
        nums.push_back(stoi(intermediate));
    }

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; ++i) {
        std::cout << nums[i] << "+";
    }

    std::cout << nums[nums.size() - 1];
}