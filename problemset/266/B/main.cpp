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
    int studentNum = 0;
    std::cin >> studentNum;

    int sec = 0;
    std::cin >> sec;

    std::string students = std::string();
    std::cin >> students;

    for (; sec > 0; --sec) {
        for (int i = 0; i < studentNum - 1; ++i) {
            if (students[i] == 'B' && students[i + 1] == 'G') {
                students[i] = 'G';
                students[i + 1] = 'B';
                i = i + 1;
            }
        }
    }

    std::cout << students << std::endl;
}
