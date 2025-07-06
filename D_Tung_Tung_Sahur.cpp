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
        string p , s;
        cin>>p>>s;
        int n = p.size();
        int m = s.size();
        int i= 0;
        int j = 0;
        if(m<n|| m>2*n){
            cout<<"NO"<<endl;
            continue;
        }
        if(s == p){
            cout<<"YES"<<endl;
            continue;
        }
        
        int tempcnt = 0;
        int flag = 0;
int temp=0;
       while(i<n || j <m){
        if(i != 0 && j!=0){
            if(p[i] == s[j] && p[i]!=p[i-1]){
                tempcnt=0;
            }
        }
        if(p[i] == s[j]){
            tempcnt++;
            i++;
            j++;
        }
        else {
            if(tempcnt!=0)
            temp =  tempcnt;
            tempcnt= 0;
          
            if(temp!=0 && s[j] == p[i-1] && j<m){
                
                j++;
                temp--;
            }
            else {
                flag = 1;
                break;
            }
        }
       }
       while(j<m){
        if(tempcnt!=0&& s[j] == p[i-1]){
            j++;
            tempcnt--;
        }
        else{
            flag =1;
            break;
        }
       }
       if(flag ||i<n){
        cout<<"NO"<<endl;
       }
       else {
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