#include<bits/stdc++.h>
using namespace std;
#include <algorithm>


int main() {
    int num = 3;
    int n = 5;
    int a[n] = {2,3,2,5,4};
    int t = 1;
    
    while (t--) {
        for (int i = 0; i < n; ++i) {
            if (a[i] <= num) {
                cout << "YES" << "\n";
                break;
            }
            else {
                sort(a, a+n);
                if (a[0]+a[1] <= num) {
                    cout << "Yes" << "\n";
                    break;
                }
                else {
                    cout << "NO" << "\n";
                    break;
                }
            }
        }
        
    }
}