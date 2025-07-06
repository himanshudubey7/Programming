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



int check(int n, const vector<ll>& ar, ll mid) {
    vector<int> c1(n + 1, 0);
    vector<int> c2(n + 1, 0);
    c1[0] = 1;
   

    for(int i = 0; i < n; ++i) {
        vector<int> temp1(n + 1, 0);
        vector<int> temp2(n + 1, 0);

        if(c1[i]) {
            if(i + 1 < n && abs(ar[i + 1] - ar[i]) <= mid) {
                temp1[i + 2] = 1;
            }
            if(mid >= 1) {
                temp2[i + 1] = 1;
            }
        }

        if(c2[i]) {
            if(i + 1 < n && abs(ar[i + 1] - ar[i]) <= mid) {
                temp2[i + 2] = 1;
            }
        }

        for(int j = 0; j <= n; ++j) {
            if(temp1[j] == 1) c1[j] = 1;
            if(temp2[j]== 1) c2[j] = 1;
        }
    }

    return (c1[n] || c2[n]);
}












//--------------------------------------------------------------------------------------------------
void solve(){
  ll t;
    cin>>t;
    while(t--){
ll n;
cin>>n;

vector<ll> ar(n);
for(int i= 0;i<n;i++){
    cin>>ar[i];
}
if(n == 1){
    cout<<1<<endl;
    continue;
}
unordered_map<ll, ll>mp;
ll mx = INT_MIN;

ll i = 0;
ll j = 1e18;
ll ans = j;
while(i<=j){
    ll mid = i+(j-i)/2;
    if(check(n, ar, mid)){



        
ans = mid;
j = mid-1;
    }
    else{
        i = mid+1;
    }

}
cout<<ans<<endl;
    }



}

//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}
