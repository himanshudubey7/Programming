#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> p(n), d(n);
        for (int i = 0; i < n; ++i) cin >> p[i];
        for (int i = 0; i < n; ++i) cin >> d[i];
        int q;
        cin >> q;
        while (q--) {
            ll a;
            cin >> a;
            ll pos = a;
            int dir = 1; // 1 for right, -1 for left
            bool exited = false;
            for (int step = 0; step < 1000; ++step) {
                if (pos < 1 || pos > 1e15) {
                    exited = true;
                    break;
                }
                bool red = false;
                for (int i = 0; i < n; ++i) {
                    if (p[i] == pos) {
                        ll time = step;
                        if (time % k == d[i]) {
                            red = true;
                            break;
                        }
                    }
                }
                if (red) dir *= -1;
                pos += dir;
            }
            cout << (exited ? "YES" : "NO") << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}