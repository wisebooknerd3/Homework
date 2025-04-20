#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        if (x % k != 0) {
            cout << 1 << endl;
            cout << x << endl;
        } else {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
    }
    return 0;
}
/*
int main() {
    int t = 1;


    while (t--) {
        int x = 10;
        int k = 2;
        

        if (x % k != 0) {
            // Can jump directly in one move
            cout << 1 << "\n";
            cout << x << "\n";
        } else {
            // Break into two valid moves
            int a = x - 1;
            int b = 1;

            // If a or b is divisible by k, adjust
            if (a % k == 0) {
                a -= 1;
                b += 1;
            }

            cout << 2 << "\n";
            cout << a << " " << b << "\n";
        }
    }

    return 0;
    
}*/