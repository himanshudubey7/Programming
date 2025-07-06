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
ll x, y , k;
cin>>x>>y>>k;

cout<<max(2*((x+k-1)/k)-1,         2*((y+k-1)/k))<<endl;

// if(x == y){
//     cout<< 2*((x/n)+(x%n))<<endl;
// }
// else if(x>y){
//     if(n>=x){
//         if(y == 0){
//             cout<<1<<endl;
//         }
//         else{
//             cout<<2<<endl;
//         }
//         continue;
//     }
//     int m2 = 2*(y/n);
//     int rem = x-y;
//     if(n<rem){
//     m2 += 2*(rem/n) + (rem%n);
//     cout<<m2-1<<endl;
//     }
//     else{
//         cout<<m2+1<<endl;
//     }

 

   
// }
// else if(y>x){
//     if(n>=y){
//         cout<<2<<endl;
//         continue;
//     }
    
//   int mo = 2*(x/n);
//  int r = y-x;
//  if(n<r){
//  mo+= 2*((r/n));
//  if(r%n !=0){
//     mo+=2;
//  }

//     cout<<mo<<endl;
//  }
//  else{
//     mo = 0;
//     mo+= 2*(y/n);
//     if(y%n!=0){
//         mo+=2;
//     }
//     cout<<mo<<endl;
//  }

// }

}



}

//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}