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
    int panDamaged = 0;
    std::cin >> panDamaged;
    int doorDamaged = 0;
    std::cin >> doorDamaged;
    int heelsDamaged = 0;
    std::cin >> heelsDamaged;

    int momCalled = 0;
    std::cin >> momCalled;

    int totalDragon = 0;
    std::cin >> totalDragon;

    int damagedDragon = 0;
    for (int i = 1; i <= totalDragon; i++) {
        if (i % panDamaged == 0 || i % doorDamaged == 0 || i % heelsDamaged == 0 || i % momCalled == 0) {
            damagedDragon++;
#ifndef ONLINE_JUDGE
        } else {
            std::cerr << "the dragon " << i << " is undamaged" << std::endl;
#endif
        }
    }
    std::cout << damagedDragon;
}
