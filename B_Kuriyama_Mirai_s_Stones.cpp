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
ll n;
cin>>n;
vector<ll> ar(n);
for(int i= 0;i<n;i++){
    cin>>ar[i];
}
vector<ll> vt = ar;
sort(vt.begin(), vt.end());
ll m ;
cin>>m;
vector<ll> pre(n, 0);
vector<ll> pre2(n,0);
pre[0]  = ar[0];
pre2[0]  = vt[0];
for(int i= 1;i<n;i++){
    pre[i] = ar[i]+pre[i-1];
    pre2[i] = vt[i]+pre2[i-1];
}
while(m--){
    ll t, l , r;
    cin>>t>>l>>r;
    if(t == 2){
        // cout<<pre2[r-1]<<" "<<pre2[l-2]<<endl;
        if(l>1)
        cout<<pre2[r-1]-pre2[l-2]<<endl;
        else
        cout<<pre2[r-1]<<endl;
    }
    else if(t ==1 ){
        if(l>1)
        cout<<pre[r-1]- pre[l-2]<<endl;
        else{
            cout<<pre[r-1]<<endl;
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