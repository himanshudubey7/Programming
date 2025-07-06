//author: Ghostyy :D
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MOD = 1e9 + 7;
const int N = 1e4 + 5;

vector<int> fact(N), invFact(N);


int modExp(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}


void precomputeFactorials() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = modExp(fact[i], MOD - 2, MOD); 
    }
}


int nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return ((fact[n] * invFact[r]) % MOD * invFact[n - r]) % MOD;
}
void solve() {
    int k, a, b;
    cin >> k >> a >> b;
    
    int ans = 0;
    for (int i = 0; i <= a; i += k) {
        ans = (ans + nCr(a, i) * modExp(2, b, MOD)) % MOD;
    }
    
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    precomputeFactorials();

    int T;
    cin >> T;
    
    // cout << invFact[4] << endl;

    while (T--) {
        solve();
    }

    return 0;
}
