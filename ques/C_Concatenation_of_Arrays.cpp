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
bool customSort(const pair<int, int>& a, const pair<int, int>& b) {
    // Sort by second element in ascending order
    if (a.second != b.second) {
        return a.second < b.second;
    }
    // If second elements are the same, sort by first element in descending order
    return a.first > b.first;
}
bool comp(const array<ll, 3> &a , const array<ll, 3>&b){
    return a[0]<b[0];
}
//--------------------------------------------------------------------------------------------------
void solve(){
  ll t;
    cin>>t;
    while(t--){
ll n ;
cin>>n;
vector<pair<ll, ll>>ar;
vector<ll> ans;
for(int i = 0;i<n;i++){
    int x, y;
    cin>>x>>y;
    ar.push_back({x,y});
    ans[2*1] = ar[i].first;
    ans[2*i+1] = ar[i].second;
}
sort(ans.begin(), ans.end());
map<ll, ll> mp;
ll ind = 1;
for(int i= 0;i<2*n ;i++){
    if(mp.find(ans[i]) == mp.end()){
        mp[ans[i]]++;
        ind++;
    }
}
vector<array<ll, 2>> comm(n);
for(int i= 0;i<n;i++){
    comm[i][0] = mp[ar[i].first];
    comm[i][1] = mp[ar[i].second];
}
vector<array<ll, 3>> res(n);
for(int i= 0;i<n;i++){
    ll sum = comm[i][0] + comm[i][1];
    res[i] = {sum , ar[i].first, ar[i].second};
}
sort(res.begin(), res.end(), comp);

    // sort(ar.begin(), ar.end(), customSort );
    // for(auto it : ar){
    //     cout<<it.first<<" "<<it.second<<" ";
    // }
    // cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<res[i][1]<<" "<<res[i][2]<<" ";
    }
    cout<<endl;
}
    }





//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}