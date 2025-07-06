// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define int ll
// const int MOD = 1e9 + 7;

// ll modExp(ll base, ll exp, ll mod) {
//     int res = 1;
//     while (exp > 0) {
//         if (exp & 1)
//          res = (res * base) % mod;
//         base = (base * base) % mod;
//         exp >>= 1;
//     }
//     return res;
// }

// ll modInverse(ll x, ll mod) {
//     return modExp(x, mod - 2, mod);
// }
// map<int,double>mp;

// int sumBinomialCoefficients(int n) {
//     int pow2n = modExp(2, n, MOD);
//     int cosTerm;
//     switch (n % 6) {
//         case 0: cosTerm = 2; break;
//         case 1: cosTerm = 1; break;
//         case 2: cosTerm = -1; break;
//         case 3: cosTerm = -2; break;
//         case 4: cosTerm = -1; break;
//         case 5: cosTerm = 1; break;
//         default: cosTerm = 0; break;
//     }
//     cosTerm = (cosTerm + MOD) % MOD;
//     int numerator = (pow2n + cosTerm) % MOD;
//     int inv3 = modInverse(3, MOD);
//     int result = (numerator * inv3) % MOD;
//     return result;
// }



// // int computeUsingCosFormula(int a, int b) {
// //     int power2A = modExp(2, a, MOD);
// //     int power2B = modExp(2, b, MOD);
    
// //     int omega = modExp((MOD - 1) / 2, a, MOD); 
// //     int omega2 = modExp((MOD - 1) / 2, a, MOD); 
// //     long long sumDivBy3 = (((power2A + omega + omega2)%MOD) * modInverse(3, MOD))%MOD;

// //     return (sumDivBy3 * power2B) % MOD;
// // }
// long long sumEverythird(long long a) {
//     if (a == 0) return 1; 

//     long long pow2 = modExp(2, a, MOD);
//     long long omega = modExp(7, (MOD - 1) / 3, MOD);  
//     long long omega_conj = modExp(omega, MOD - 2, MOD); 
    
//     long long sum = (pow2 + modExp(omega, a, MOD) + modExp(omega_conj, a, MOD)) % MOD;
//     sum = (sum * modInverse(3, MOD)) % MOD; 
//     return sum;
// }

// void solve() {
//     long long a, b;
//     cin >> a >> b;
//     long long ans =  sumBinomialCoefficients(a) ;
//     long long mul = modExp(2,b,MOD);
//     // cout<<mul<<endl;
//     // cout<<ans<<endl;
//     ans= (ans*mul);
//     ans%=MOD;
//     cout<<ans<<endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }

//     return 0;
// }

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

//--------------------------------------------------------------------------------------------------
void solve(){
ll n ;
cin>>n;
vector<ll> ar(n);
for(int i= 0;i<n;i++){
    cin>>ar[i];
}
cout<<26<<endl;



}

//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}