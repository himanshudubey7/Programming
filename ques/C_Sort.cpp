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
ll n , q;
cin>>n>>q;
string a, b;
cin>>a>>b;
vector<int> ans;
while(q--){
    int l, r;
    cin>>l>>r;

    string p= a.substr(l-1, r-l+1);
    string q = b.substr(l-1, r-l+1 );
    int cnt = 0;
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for(int i = 0;i<p.size();i++){
        mp1[p[i]]++;
    }
    sort(q.begin(), q.end());

    // sort(q.begin()+(l-1), q.end()+(r-1));
    // cout<<p<<endl;
    // cout<<q<<endl;

    int s = 0;
    int f = 0;
for(int i= 0;i<q.size();i++){
    if(mp1.find(q[i]) == mp1.end()){
        cnt++;
    }
    else{
        mp1[q[i]]--;
        if(mp1[q[i]] == 0){
            mp1.erase(q[i]);
        }
       
    }
}
    // cout<<cnt<<endl;
    cout<<cnt<<endl;
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