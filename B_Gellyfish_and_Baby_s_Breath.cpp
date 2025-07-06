//author: Ghostyy :D
# include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll mod = 1000000007;


//--------------------------------------------------------------------------------------------------
//binary exponentiation
int exp(int base,int n){
 int res=1;
 while(n){
     if(n%2){
         res=res*base;
         n--;
     }
     else{
         base*=base;
         n/=2;
     }
 }
 return res;
}
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//sieve of erastothenes
vector<int> primes; // stores ith prime number at index i-1
ll is_prime[1000001];

void sieve() {
    int maxN = 1000000;
    for (int i = 1; i <= maxN; i++) is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= maxN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= maxN; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
}
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//primality check - checks if a number is prime or not
bool isPrime(int n){
 if(n==1) return false;
 for(int i=2;i*i<=n;i++){
     if(n%i==0) return false;
 }
 return true;
}
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// An iterative binary search function and return  the index. 
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
//--------------------------------------------------------------------------------------------------

const ll minus = 1e5 + 10;
ll ar[100000 + 10];  // powers of 2 modulo 998244353

//--------------------------------------------------------------------------------------------------
void solve() {
    ll t;
    cin >> t;

    // Precompute powers of 2
    ar[0] = 1;
    for (int i = 1; i < 100000 + 5; i++) {
        ar[i] = (ar[i - 1] * 2) % 998244353;
    }

    while (t--) {
        int n;
        cin >> n;
        vector<ll> p(n), q(n);
        vector<int> res(n);

        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> q[i];

        vector<ll> pairA(n), pairB(n);
        vector<int> indP(n), indq(n);

        pairA[0] = p[0];
        pairB[0] = q[0];
        indP[0] = 0;
        indq[0] = 0;

        for (int i = 1; i < n; i++) {
            if (pairA[i - 1] < p[i]) {
                pairA[i] = p[i];
                indP[i] = i;
            } else {
                pairA[i] = pairA[i - 1];
                indP[i] = indP[i - 1];
            }

            if (pairB[i - 1] < q[i]) {
                pairB[i] = q[i];
                indq[i] = i;
            } else {
                pairB[i] = pairB[i - 1];
                indq[i] = indq[i - 1];
            }
        }

        for (int i = 0; i < n; i++) {
            int mxm = pairA[i];
            int flag1 = indP[i];
            int mxmb = pairB[i];
            int flag2 = indq[i];
            int maxm = max(mxm, mxmb);
            ll ft = -1;

            if (mxm == maxm) {
                int idx = i - flag1;
                if (idx >= 0 && idx < n)
                    ft = max(ft, q[idx]);
            }
            if (mxmb == maxm) {
                int idx = i - flag2;
                if (idx >= 0 && idx < n)
                    ft = max(ft, p[idx]);
            }

            if (ft >= 0) {
                ll value = (ar[maxm] + ar[ft]) % 998244353;
                res[i] = value;
            } else {
                res[i] = ar[maxm]; 
            }
        }

        for (int i = 0; i < n; i++) {
            cout << res[i];
            if (i + 1 < n)
                cout << " ";
            else
                cout << "\n";
        }
    }
}

//--------------------------------------------------------------------------------------------------
int main() {
    fast;
    solve();
    return 0;
}