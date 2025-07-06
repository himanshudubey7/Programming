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
        int n;
        cin>>n;
        vector<int> a(n),b(n), c(n);
        vector<pair<int,int>> vp1(n);
        vector<pair<int,int>> vp2(n);
        vector<pair<int,int>> vp3(n);

        for(int i= 0;i<n;i++){
            cin>>a[i];
            vp1.push_back({a[i], i});
        }
        for(int i= 0;i<n;i++){
            cin>>b[i];
             vp2.push_back({b[i], i});
        }
        for(int i= 0;i<n;i++){
            cin>>c[i];
             vp3.push_back({c[i], i});
        }
        sort(vp1.begin(), vp1.end(), greater<pair<int,int>>());
        sort(vp2.begin(), vp2.end(), greater<pair<int,int>>());
        sort(vp3.begin(), vp3.end(), greater<pair<int,int>>());
        int cost = 0;
       for(int i= 0;i<3;i++){
        for(int j= 0;j<3;j++){
            for(int k=0;k<3;k++){
                int x = vp1[i].second;
                int y = vp2[j].second;
                int z = vp3[k].second;
                if((x == y ) or (y == z) or ( x == z)) continue;

                cost = max(cost, (a[x]+b[y]+c[z]));
            }
        }
       }

       cout <<cost<<endl;
       
    }



}

//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}