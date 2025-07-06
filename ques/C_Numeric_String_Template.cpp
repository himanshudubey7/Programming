//author: Ghostyy :D
# include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll mod = 1000000007;


//--------------------------------------------------------------------------------------------------
//binary exponentiation
ll exp(ll base,ll n){
 ll res=1;
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
vector<ll> primes; // stores ith prime number at index i-1
ll is_prime[1000001];

void sieve() {
    ll maxN = 1000000;
    for (ll i = 1; i <= maxN; i++) is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for (ll i = 2; i * i <= maxN; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= maxN; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    for (ll i = 2; i <= maxN; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
}
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//primality check - checks if a number is prime or not
bool isPrime(ll n){
 if(n==1) return false;
 for(ll i=2;i*i<=n;i++){
     if(n%i==0) return false;
 }
 return true;
}
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// An iterative binary search function and return  the index. 
ll binarySearch(ll arr[], ll l, ll r, ll x)
{
    while (l <= r) {
        ll m = l + (r - l) / 2;
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
  ll t;
    cin>>t;
    while(t--){
         ll n;
        cin >> n;
        vector<ll> ar(n);
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
        }

        ll m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;

            if (s.size() != n) {
                cout << "NO"<<endl;;
                continue;
            }

            unordered_map<ll, char> mp;
            unordered_map<char, ll> mp2;
            bool flag = true;
            
            for (ll i = 0; i < n; i++) {
                ll x= ar[i];
                char ch = s[i];

                if (mp.count(x)) {
                    if (mp[x] !=ch) {
                        flag = false;
                        break;
                    }
                } else {
                    mp[x] = ch;
                }
//   int cnt = 0;
//    int cn = 0;
// //    for(auto pp : mp){
// //     cout<<pp.first<<" "<<pp.second<<endl;
// //    }
 
//    vector<ll> che(26,'$');
//    for(auto it: mp){
//     // cout<<it.first<<" "<<it.second<<endl;
    
//     if(mp.count(it.first) != mp2.count(it.second)){
//         // cout<<mp.count(it.first)<<endl;
//         // cout<<mp.count(it.second)<<endl;
//        flag = 1;
//        break;
//     }
                if (mp2.count(ch)) {
                    if (mp2[ch] != x) {
                        flag = false;
                        break;
                    }
                } else {
                    mp2[ch] = x;
                }
            }

            if (flag) {
                cout << "YES"<<endl;
            } else {
                cout << "NO"<<endl;;
            }
        }
    }

    }





//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}