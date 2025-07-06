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
        vector<int> ar(n+1);
        for(int i= 1;i<=n;i++){
            cin>>ar[i];
        }
        int d= ar[2]-ar[1];
        int flag = 0;
        for(int i= 1;i<n;i++){
            if((ar[i+1]-ar[i]) != d){
                // cout<<ar[i+1]-ar[i]<<" "<<i<<endl;
                flag = 1;
                break;
            }
        }
        if(flag) {
            cout<<"NO"<<endl;
            continue;
            
        }
        int calc = (2*ar[1])-ar[2];
        // cout<<calc<<endl;
        
        int y =calc/(n+1);
        // cout<<n+1<<endl;
        int x = ar[1] - n*y;
        // cout<<"the values are: "<<endl;
        // cout<<x<<" "<<y<<endl;
        if(y>=0 && x>=0){
            if(y* (n+1) == calc ){
                for(int i= 1;i<=n;i++){
                    int p = x*i;
                    int q = y * (n-i+1);
                    if(ar[i]- p-q != 0){
                        flag = 1;
                        break;
                    }
                }
            }
            else{
                // cout<<"HEllo"<<endl;
                flag = 1;

            }
        }
        else{
            flag = 1;
        }

        if(flag){
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