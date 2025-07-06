//author: Ghostyy :D
# include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vi;
typedef pair<long ,long > pi;
typedef set<long> stl;
typedef set<char> stc;
typedef set<string> sts;
typedef map<long,long > mpll;
typedef map<int,char> mpic;
typedef map<char,int> mpci;
typedef map<int,string> mpis;
typedef map<string,int> mpsi;
typedef map<string,string> mpss;
#define F first
#define S second 
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define rep(i,a,b) for(int i=a;i<=b;i++) 
#define all(a) (a).begin(),(a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll mod = 1000000007;


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


//primality check - checks if a number is prime or not
bool isPrime(int n){
 if(n==1) return false;
 for(int i=2;i*i<=n;i++){
     if(n%i==0) return false;
 }
 return true;
}


// An iterative binary search function.
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

bool cmp(pair<ll,ll> a , pair<ll,ll> b){
    if(a.first == b.first){
        return a>b;
    }
    else{
        return a<b;
    }


}
void solve(){
  ll t;
    cin>>t;
    while(t--){
int n, p; 
cin>>n>>p;
int ar[n], br[n];
for(int i= 0; i<n;i++){
    cin>>ar[i];// no. of people
}
for(int i= 0;i<n;i++){
    cin>>br[i];// money
}
vector<pair<ll , ll >> pv;
for(int i= 0;i<n;i++){
    pv.push_back({br[i], ar[i]});
}
sort(pv.begin(), pv.end(), cmp);
// for(auto it: pv){
//     cout<<it.first <<" "<<it.second<<endl;
// }
// cout<<endl;
ll cost = p;
ll n1 = n-1;
for(auto it : pv){
    if(it.second<=n1){
        cost  += min(it.second*p , it.second*it.first);
        n1 = n1-it.second;
    }
    else {
        cost +=min(n1*p , n1*it.first);
        n1  = 0;
    }
}
cout<<cost<<endl;

// for(auto it: pv){
    
    
// } 
}



}

int main()
{
 fast
solve();
return 0;
  
}