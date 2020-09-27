#! /bin/bash
echo "Creating project template for competitive programing in ${PWD}"

touch main.cpp
touch main.h
touch input
touch output
touch error

cat > main.h <<EOF
    #include <bits/stdc++.h>
    
    int main();
    void solve();

EOF

cat > main.cpp <<EOF
    #ifndef ONLINE_JUDGE
    #include "main.h"
    #else
    #include <bits/stdc++.h>
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

    }

EOF

cat > Makefile <<EOF
CC = g++
CFLAG = -std=c++17 -Wall -Og -g

default: all

all:
	\$(CC) \$(CFLAG) -H main.cpp -o main

header:
	\$(CC) \$(CFLAG) *.h

run: all
	./main

EOF
    
make header