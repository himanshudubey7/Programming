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
    while(t--){
ll n;
cin>>n;
ll ar[n];
ll br[n];
ll cr[n];
long double sum = 0.00;
for(int i= 0;i<n;i++){
    cin>>ar[i];
    sum += ar[i];
    }
for(int i= 0;i<n;i++){
    cin>>br[i];
}
for(int i= 0;i<n;i++){
    cin>>cr[i];
}

// there will be six permutation :  ABC, ACB , BAC , BCA, CAB, CBA;
ll eno = ceil(sum/3);
ll sumA = 0;
ll sumB = 0;
ll sumc  = 0;
int ans =0;
int la =0;
int ra = 0;
int lb = 0;
int rb = 0;
int lc = 0;
int rc = 0;
for(int i = 0;i<n;i++){
    // ABC
    la = 0;
   if(sumA<eno){
    sumA+=ar[i];
    ra= i;
    continue;
   }
   if(sumA>=eno && sumB<eno){

    sumB+=br[i];
    rb = i;
    continue;
   }
   if(sumA>=eno && sumB>=eno){
    sumc+=cr[i];
    rc= i;
   }
   if(sumc>=eno){
    ans = 1;

   }
}
if(ans){
    cout<<la+1<<" "<<ra+1<<" "<<ra+2<<" "<<rb+1<<" "<<rb+2<<" "<<rc+1<<endl; 
    continue;
}
else{
la = 0;
lb = 0;
lc =  0;
sumA = 0;
sumB = 0;
sumc= 0;
ra = 0;
rb = 0;
rc = 0;
ans = 0;
}
for(int i = 0;i<n;i++){
    // Acb
    la = 0;
   if(sumA<eno){
    sumA+=ar[i];
    ra= i;
    continue;
   }
  
   if(sumA>=eno && sumc<eno){

    sumc+=cr[i];
    rc = i;
    continue;
   }
   if(sumA>=eno && sumc>=eno){
    sumB+=br[i];
    rb= i;
   }
   if(sumB>=eno){
    ans = 1;
   }
}
if(ans){
    cout<<la+1<<" "<<ra+1<<" "<<rc+2<<" "<<rb+1<<" "<<ra+2<<" "<<rc+1<<endl; 
    // cout<<sumB<<endl;
    continue;
}
else{
la = 0;
lb = 0;
lc =  0;
sumA = 0;
sumB = 0;
sumc= 0;
ra = 0;
rb = 0;
rc = 0;
ans = 0;
}


for(int i = 0;i<n;i++){
    // bac
    lb = 0;
   if(sumB<eno){
    sumB+=br[i];
    rb= i;
   }
   if(sumB>=eno && sumA<eno){

    sumA+=ar[i];
    ra = i;
    continue;
   }
   if(sumB>=eno && sumA>=eno){
    sumc+=cr[i];
    rc= i;
    continue;
   }
   if(sumc>=eno){
    ans = 1;

   }
}
if(ans){
    cout<<rb+2<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<ra+2<<" "<<rc+1<<endl; 
    continue;
}
else{
la = 0;
lb = 0;
lc =  0;
sumA = 0;
sumB = 0;
sumc= 0;
ra = 0;
rb = 0;
rc = 0;
ans = 0;
}

for(int i = 0;i<n;i++){
    // bca
    lb = 0;
   if(sumB<eno){
    sumB+=br[i];
    rb= i;
    continue;
   }
   if(sumB>=eno && sumc<eno){

    sumc+=cr[i];
    rc = i;
    continue;
   }
   if(sumB>=eno && sumc>=eno){
    sumA+=ar[i];
    ra= i;
   }
   if(sumA>=eno){
    ans = 1;
   }
}
if(ans){
    // cout<<eno<<endl;
    cout<<rc+2<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<rb+2<<" "<<rc+1<<endl; 
    continue;
    
}
else{
la = 0;
lb = 0;
lc =  0;
sumA = 0;
sumB = 0;
sumc= 0;
ra = 0;
rb = 0;
rc = 0;
ans = 0;
}

for(int i = 0;i<n;i++){
    // cba
    lc = 0;
   if(sumc<eno){
    sumc+=cr[i];
    rc= i;
    continue;
   }
   if(sumc>=eno && sumB<eno){

    sumB+=br[i];
    rb = i;
    continue;
   }
   if(sumc>=eno && sumB>=eno){
    sumA+=ar[i];
    ra= i;
   }
   if(sumA>=eno){
    ans = 1;

   }
}
if(ans){
    cout<<rb+2<<" "<<ra+1<<" "<<rc+2<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl; 
    continue;
}
else{
la = 0;
lb = 0;
lc =  0;
sumA = 0;
sumB = 0;
sumc= 0;
ra = 0;
rb = 0;
rc = 0;
ans = 0;
}

for(int i = 0;i<n;i++){
    // cab
    lc = 0;
   if(sumc<eno){
    sumc+=cr[i];
    rc= i;
    continue;
   }
   if(sumc>=eno && sumA<eno){

    sumA+=ar[i];
    ra = i;
    continue;
   }
   if(sumc>=eno && sumA>=eno){
    sumB+=br[i];
    rb= i;
   }
   if(sumB>=eno){
    ans = 1;

   }
}
if(ans){
    cout<<rc+2<<" "<<ra+1<<" "<<ra+2<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<endl; 
    continue;
}
else{
// la = 0;
// lb = 0;
// lc =  0;
// sumA = 0;
// sumB = 0;
// sumc= 0;
// ra = 0;
// rb = 0;
// rc = 0;
// ans = 0;
cout<<-1<<endl;
}

}
}

int main()
{
 fast
solve();
return 0;
  
}