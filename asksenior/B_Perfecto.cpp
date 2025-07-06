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

bool isPerfectSquare(long long num) {
    if (num < 0) return false; 

    long long root = sqrt(num); 
    return root * root == num;
}
//--------------------------------------------------------------------------------------------------
void solve(){
  ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> nums(n);
        for(int i = 0;i<n;i++){
           

            nums[i] = i+1;
        }
        ll sum = 0;
        int flag = 0;
        for(int i= 0;i<n;i++){
            sum+=nums[i];
            if(isPerfectSquare(sum)){
                if(i == n-1){
                    cout<<-1<<endl;
                    flag = 1;
                    
                }
                else{
                sum+=nums[i+1];
                swap(nums[i], nums[i+1]);
                i++;
                }
            }
        }
        // cout<<sum+nums[n-1]<<endl;
      if(!flag){

        for(auto it : nums){
            cout<<it<<" ";
        }
        cout<<endl;
    }
        // double val3 = pow((s + n)/2, 0.5);
        // ll val4 = pow((s + n)/2, 0.5);
        // // cout<<val3<<" "<<val4<<endl;
        
        // if(val3 == val4|| n == 1){
        //     cout<<-1<<endl;
        //     continue;
        // }
        // for(int i = 1;i<=n;i++){
        //     if(i == 2)
        //     continue;
        //     ll d = i*i;
        //    double val1 = pow((d + i)/2, 0.5);
        //    ll val2 = pow((d + i)/2 , 0.5);
           
        //    if(val1 == val2){
        //     cout<<i+1<<" "<<i<<" ";
        //     i+=2;
        //    }
        //     cout<<i<<" ";
          
        // }
        // cout<<endl;

    }



}

//--------------------------------------------------------------------------------------------------
int main()
{
 fast
solve();
return 0;
  
}