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
        int soldier = 0;

        std::cin >> soldier;

        std::vector<int> vect = std::vector<int>(soldier);

        for (int i = 0; i < vect.size(); i++) {
            std::cin >> vect[i];
        }

        int largestIndex = std::distance(vect.begin(), std::max(vect.begin(), vect.end()));
        int smallestIndex = std::distance(vect.rend(), std::min(vect.rbegin(), vect.rend()));

        if (largestIndex > smallestIndex) {
            std::cout << largestIndex - 1 + soldier - smallestIndex;
        } else {
            std::cout << (largestIndex - 1 + soldier - smallestIndex) - 1;
        }
    }

