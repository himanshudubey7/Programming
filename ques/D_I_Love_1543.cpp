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
vector<vector<char>> getSpiralOrderLayers(const vector<vector<char>>& matrix) {
    vector<vector<char>> result;
    
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        vector<char> currentLayer;

        // Traverse top row of the current layer
        for (int i = left; i <= right; i++) {
            currentLayer.push_back(matrix[top][i]);
        }
        top++;

        // Traverse right column of the current layer
        for (int i = top; i <= bottom; i++) {
            currentLayer.push_back(matrix[i][right]);
        }
        right--;

        // Traverse bottom row of the current layer, if there's still a row remaining
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                currentLayer.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Traverse left column of the current layer, if there's still a column remaining
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                currentLayer.push_back(matrix[i][left]);
            }
            left++;
        }

        for(auto it : currentLayer){
            cout<<it<<" ";
        }
        cout<<endl;

        // Add the current layer to the result
        result.push_back(currentLayer);
    }

    return result;
}
//--------------------------------------------------------------------------------------------------
void solve(){
  ll t;
    cin>>t;
    while(t--){
int n , m;
cin>>n>>m;
// int ar[n][m];
vector<string>vp(n);
map<int ,int>mp;
mp[1] = 5;
mp[4] = 3;
mp[3] = 1;
mp[5] = 4;

for(int i= 0;i<n;i++){
    string s;
    cin>>s;

   vp[i]= s;
    // cout<<s<<endl;
    // cout<<x<<endl;
    // for(int j = 0;j<m;j++){
    //     cin>>ar[i][j];
    //     cout<<ar[i][j]<<" "<<j;
        
    // }
    // cout<<endl;
}

vector<vector<char>> ar;
for(int i= 0;i<n;i++){
        string str = vp[i];
        // cout<<str<<endl;
        // cout<<str<<endl;
    for(int j =0;j<m;j++){
        char ch  = str[j];
        ar[i].push_back(ch);
    }
}

for(int i= 0;i<ar.size();i++){
    for(int j = 0;j<ar[0].size();j++){
        cout<<ar[i][j]<<" ";
    }
cout<<endl;
}
if(n*m <4){
    cout<<0<<endl;
    continue;
}
// vector<vector<char>> res;
// res = getSpiralOrderLayers(ar);
// for(int i= 0;i<res.size();i++){
//     for(int j = 0;j<res[0].size();j++){
//         cout<<res[i][j]<<" ";
//     }
//     cout<<endl;
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