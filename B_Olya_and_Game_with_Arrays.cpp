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
        vector<int>ele(n, 0);
        vector<int> trans(n, 0);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i= 0;i<n;i++){
            int m;
            cin>>m;
            for(int j = 0;j<m;j++){
                int x;
                cin>>x;
                pq.push({x, i+1});
            }
        }
        int small = pq.top().first;
        int ind = pq.top().second;
        int ans = 0;
        ans+= small;
       
        pq.pop();



int flag = 0;
        while(!pq.empty()){
            int num = pq.top().first;
            int id = pq.top().second;
            if(id == ind){
                flag =1;
                pq.pop();
            }else{
                break;
            }
        }
        while(!pq.empty()){
              int num1 = pq.top().first;
            int id1 = pq.top().second;
            if(flag == 1){
                if(trans[id1]== 1 && ele[id1] == 0){
                    ans+= num1;
                    ele[id1] = 1;
                }
                else{
                    trans[id1] = 1; 
                }

                pq.pop();
            }
            else{
              if(trans[ind] == 0){
                trans[ind] = id1;
                ind = id1;
                pq.pop();
                continue;
              }
              if(trans[id1] == 0){
                trans[id1] = ind;
              }
              else{
                
              }


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