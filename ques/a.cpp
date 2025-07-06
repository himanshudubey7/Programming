#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define int ll
using pii = pair<int, int>;
const int MOD = 1e9 + 7;
const int N = 1e4 + 5;

vector<int> fact(N), invFact(N);
int modPow(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void precompute() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = modPow(fact[i], MOD - 2, MOD); 
    }
}
int nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}
long long binpow(long long a, long long b) {
    int m=MOD;
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void solve(){
    int k;
    cin>>k;
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<=a;i+=k){
        ans+=nCr(a,i)*binpow(2,b);
        ans%=MOD;
    }
    
    cout<<ans<<endl;
    
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    precompute(); 
    int T;
    cin >> T;
	cout<<invFact[4]<<endl;
    while (T--)
    {
        solve();
        
    }

    return 0;
}