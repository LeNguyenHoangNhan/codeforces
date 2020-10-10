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
        std::unordered_set<long> color;

        for (int i = 0, temp = 0; i < 4; ++i) {
            std::cin >> temp;
            color.insert(temp);
        }

        std::cout << 4 - color.size();
    }

