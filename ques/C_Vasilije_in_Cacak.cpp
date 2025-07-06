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

void solve(){
  ll t;
    cin>>t;
    ll num = 2e5+10;
   
    // sum_for[0] = 1;
    // for(int i = 1;i<num;i++){
    //     sum_for[i] = sum_for[i-1]+(i+1);
    // }
    // sum_back[num-1] = num;
    // for(int i= num-2 ;i>=1;i--){
    //     sum_back[i] = sum_back[i+1]+(i+1);

    // }

    while(t--){
ll n, k, x;
cin>>n>>k>>x;
ll sum_for[n];
ll sum_back[n];
sum_for[0] =1 ;
for(int i = 1;i<n;i++){
    sum_for[i] = sum_for[i-1]+ (i+1);
}
sum_back[n-1] = n;
for(int i= n-1;i>0;i--){
sum_back[i-1] = sum_back[i] + i;
}
int p =k-1;
int q = n-k;
// cout<<p<<" "<<q<<endl;

ll minn = sum_for[p];
ll maxx = sum_back[q];
// cout<<minn<<" "<<maxx<<endl;
if(x>=minn && x<= maxx){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
// for(auto it : sum_back){
//     cout<<it<<endl;
// }



    }



}

int main()
{
 fast
solve();
return 0;
  
}