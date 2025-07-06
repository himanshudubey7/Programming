#include <bits/stdc++.h>
using namespace std;

int get_min_operations(vector<int>& a) {
    int n = (int)a.size();
    if (n == 1) return 0;

    int g = 0;
    for (int x : a) g = __gcd(g, x);
    if (g != 1) {
       
        for (int& x : a) x /= g;
    }

    int ones = count(a.begin(), a.end(), 1);
    if (ones > 0) {
       
        return n - ones;
    }

 
    int min_len = INT_MAX;
    for (int i = 0; i < n; i++) {
        int current_gcd = a[i];
        if (current_gcd == 1) {
            min_len = 1;
            break;
        }
        for (int j = i + 1; j < n; j++) {
            current_gcd = __gcd(current_gcd, a[j]);
            if (current_gcd == 1) {
                min_len = min(min_len, j - i + 1);
                break;
            }
        }
    }

    if (min_len == INT_MAX) {
      return -1;
    }

  
    return min_len - 1 + n - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        cout << get_min_operations(a) << "\n";
    }

    return 0;
}
