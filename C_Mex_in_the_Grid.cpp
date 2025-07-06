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
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
         int MAX_N = 501;
      int grid[MAX_N][MAX_N];
       for(int i= 0;i<n;i++){
        for(int j = 0;j<n;j++){
            grid[i][j] =0;
        }
       }
    //    for(int i= 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<ar[i][j]<<" ";
    //     }
    //     cout<<endl;
    //    }
  
        bool visited[MAX_N][MAX_N];  
        memset(visited, false, sizeof(visited));
          int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};

        int x = 0, y = 0, dir = 0, value = 0;

        for (int i = 0; i < n * n; ++i) {
            grid[x][y] = value++;
            visited[x][y] = true;

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || ny < 0 || nx >= n || ny >= n || visited[nx][ny]) {
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }

            x = nx;
            y = ny;
        }

       int maxVal = n * n - 1;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                grid[i][j] = maxVal - grid[i][j];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                cout << grid[i][j] << " ";
            cout << "\n";
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