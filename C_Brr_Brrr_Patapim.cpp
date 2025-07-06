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
  ll t;
    cin>>t;
    while(t--){
ll n;
cin>>n;
ll grid[n][n];
for(int i= 0;i<n;i++){
    for(int j = 0;j<n;j++){
        cin>>grid[i][j];
    }
}
// for(int i= 0;i<n;i++){
//     for(int j = 0;j<n;j++){
//         cout<<grid[i][j];
//     }
//     cout<<endl;
// }
vector<ll> pr((2*n), 0);
map<ll, ll> mp;
for(int i= 0;i<n;i++){
    for(int j= 0;j<n;j++){
        if(pr[(i+1)+(j+1)-1] == 0){
            pr[(i+1)+(j+1)-1] = grid[i][j]; 
            mp[grid[i][j]]++;
        }
    }
}
int miss= 0;
for(int i = 1;i<=2*n;i++){
    if(mp[i] == 0){
        miss = i;
        break;
    }
}
for(int i=0;i<2*n;i++){
    if(pr[i] ==0){
        pr[i] = miss;
        break;
    }
}
for(auto it: pr){
    cout<<it<<" ";
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