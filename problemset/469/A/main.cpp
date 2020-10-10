#ifndef ONLINE_JUDGE
#include "main.h"
#else
#include <bits/stdc++.h>

int main();
void solve();
#endif

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    freopen("error", "w", stderr);
#endif

    solve();

    std::cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << std::endl;
    return 0;
}

void solve() {
    using namespace std;
    int levelNum = 0;
    std::unordered_set<int> doableLevel;
    std::string buf;
    std::getline(std::cin, buf);
    levelNum = std::stoi(buf);

    int xLevelNum = 0;
    std::cin >> xLevelNum;

    for (int i = 0, temp = 0; i < xLevelNum; ++i) {
        std::cin >> temp;
        doableLevel.insert(temp);
    }

    int yLevelNum = 0;
    std::cin >> yLevelNum;
    
    for (int i = 0, temp = 0; i < yLevelNum; ++i) {
        std::cin >> temp;
        doableLevel.insert(temp);
    }

    if (doableLevel.size() == levelNum) {
        std::cout << "I become the guy." << std::endl;
    } else {
        std::cout << "Oh, my keyboard!" << std::endl;
    }
}
