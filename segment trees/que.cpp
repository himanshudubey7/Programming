//author: Ghostyy :D
# include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll mod = 1000000007;

const int MAXN = 200005;

vector<int> tree[MAXN];
int start[MAXN], endt[MAXN], euler[MAXN], timer = 0;
ll seg[4 * MAXN], lazy[4 * MAXN];

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

void dfs(int node, int parent) {
    start[node] = timer;
    euler[timer] = node;
    timer++;
    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node);
        }
    }
    endt[node] = timer - 1;
}


void propagate(int node, int start, int end) {
    if (lazy[node] != 0) {
        seg[node] += (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[2 * node + 1] += lazy[node];
            lazy[2 * node + 2] += lazy[node];
        }
        lazy[node] = 0;
    }
}



void updateRange(int node, int start, int end, int l, int r, int val) {
    propagate(node, start, end);
    if (start > r || end < l) return;
    if (start >= l && end <= r) {
        lazy[node] += val;
        propagate(node, start, end);
        return;
    }
    int mid = (start + end) / 2;
    updateRange(2 * node + 1, start, mid, l, r, val);
    updateRange(2 * node + 2, mid + 1, end, l, r, val);
    seg[node] = seg[2 * node + 1] + seg[2 * node + 2];
}

ll queryRange(int node, int start, int end, int l, int r) {
    propagate(node, start, end);
    if (start > r || end < l) return 0;
    if (start >= l && end <= r) return seg[node];
    int mid = (start + end) / 2;
    return queryRange(2 * node + 1, start, mid, l, r) + queryRange(2 * node + 2, mid + 1, end, l, r);
}

//--------------------------------------------------------------------------------------------------
void solve(){
  ll t;
    cin>>t;
    while(t--){
        int n, q;
        cin >> n >> q;
        timer = 0;
        for (int i = 1; i <= n; i++) tree[i].clear();
        memset(seg, 0, sizeof(seg));
        memset(lazy, 0, sizeof(lazy));
        vector<int> midi(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> midi[i];
        }
        for (int i = 0; i < n - 1; i++) {
            int x, y;
            cin >> x >> y;
            tree[x].push_back(y);
            tree[y].push_back(x);
        }
        dfs(1, -1);
        for (int i = 0; i < n; i++) {
            updateRange(0, 0, n - 1, i, i, midi[euler[i]]);
        }
        while (q--) {
            int type, c, d = 0;
            cin >> type >> c;
            if (type == 1) {
                cin >> d;
                updateRange(0, 0, n - 1, start[c], endt[c], d);
            } else {
                cout << queryRange(0, 0, n - 1, start[c], endt[c]) << endl;
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

