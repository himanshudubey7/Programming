#include <bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

         int X = a ^ b;
    int highestBit = 31 - __builtin_clz(X);

 
    int mask = (1 << (highestBit + 1)) - 1;
        cout << (X|mask) << endl;
    }
    return 0;
}
