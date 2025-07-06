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


ll calc(ll s,   const vector<pair<ll, ll>>& days, ll d) {
    ll cnt = 0;
    for (auto it : days) {
        if (max(it.first, s) <= min(it.second, s + d - 1)) {
            cnt++;
        }
    }
    return cnt;
}
//--------------------------------------------------------------------------------------------------
void solve(){
  ll t;
    cin>>t;
    while(t--){
ll n , d, k;
cin>>n>>d>>k;
vector<ll> check(n, 0);
vector<pair<ll, ll> >days(k);
        map<int,int>start,end;
for(ll i = 0;i<k; i++){
    ll l , r;
    cin>>l>>r;
    days[i] = {l, r};
       start[l]++;
            end[r]++;
}
sort(days.begin(), days.end());

   ll mx = 0, mn = k + 1;
        ll bro = 1, mo = 1;
        ll con = 0;
        int moind=1,broind=1;

        for(int i=1; i<=d; i++){
            if(start.find(i)!=start.end()){
                con+=start[i];
            }
        }

        mo=bro=con;
        //cout<<conv<<" ";
        for(int i=2; i<=n-d+1; i++){
            if(start.find(i+d-1)!=start.end()){

                con+=start[i+d-1];
            }
            if(end.find(i-1)!=end.end()){
                con-=end[i-1];
            }
            //cout<<conv<< " ";
            if(con>bro){
                bro=con;
                broind=i;
            }
            if(mo>con){
                mo=con;
                moind=i;
            }
        }



        // for (ll i = 1; i <= n - d + 1; i++) {
        //     ll over = calc(i, days, d);  
        //     if (over > mx) {
        //         mx = over;
        //         bro = i;
        //     }
        //     if (over < mn) {
        //         mn = over;
        //         mo = i;
        //     }
        // }

         cout << broind << " " << moind << endl;


    }



}

//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}

