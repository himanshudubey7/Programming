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
ll n ,m;
cin>>n>>m;
vector<ll>ar(n);
for(int i= 0;i<n;i++){
    cin>>ar[i];
}
int d;
cin>>d;
vector<ll> temp(n);
for(int i = 0;i<n;i++){
temp[i] = d-ar[i];
}
int minn = ar[0];
int opmin = temp[0];
int flag = 0;
if( n==1|| n == 2){
    cout<<"YES"<<endl;
    continue;
}
vector<bool>p1(n,false);
vector<bool>p2(n,false);
p1[0] = true;
p2[0] = true;

int temp1 = ar[0];
int temp2 = temp[0];
vector<int>ans(n);



for(int i =1;i<n;i++){
    int flag1 = 0;
int flag2 = 0;
   if(p1[i-1] && ar[i]>=temp1){
    flag1 = 1;
   }
   if(p2[i-1] && ar[i]>=temp2){
    flag1 = 1;
   }
   if(p1[i-1] && temp[i]>=temp1){
    flag2 = 1;
   }
   if(p2[i-1] && temp[i]>=temp2){
    flag2 = 1;
   }
   if(flag1 ==0 && flag2==0){
    flag = 1;
    break;
   }
   if(flag1){
    temp1 = ar[i];
   }
   if(flag2){
    temp2 = temp[i];
   }
   p1[i] = flag1;
   p2[i] = flag2;
   

}
if(flag == 1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
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