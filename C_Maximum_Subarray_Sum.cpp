//author: Ghostyy :D
# include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll mod = 1000000007;
const ll NEG_INF = -1000000000000000000LL;



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

ll maxSubarraySum(const vector<ll>& nums) {
    if (nums.empty()) return 0;
    ll max_current = nums[0];
    ll max_global = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        max_current = max(nums[i], max_current + nums[i]);
        max_global = max(max_global, max_current);
    }

    return max_global;
}
//--------------------------------------------------------------------------------------------------
void solve(){
  ll t;
    cin>>t;
    while(t--){
        ll n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll> arr(n);
        for(int i= 0;i<n;i++){
            cin>>arr[i];
        }
        // ll sum = maxSubarraySum(ar);

        ll curr_sum = 0, max_known = LLONG_MIN;
        for (ll i = 0; i < n; ++i) {
            if (s[i] == '1') {
                curr_sum = max(arr[i], curr_sum + arr[i]);
                max_known = max(max_known, curr_sum);
                if (curr_sum < 0) curr_sum = 0;
            } else {
                curr_sum = 0;
            }
        }
        if (max_known > k) {
            cout << "No\n";
            continue;
        }
        ll zero_index = -1;
        for (ll i = 0; i < n; ++i) {
            if (s[i] == '0') {
                zero_index = i;
                break;
            }
        }
        if (zero_index == -1) {
            if (max_known == k) {
                cout << "Yes"<<endl;
                for (ll val : arr) cout << val << ' ';
                cout <<endl;
                continue;
            } else  {
                cout << "No\n";
            }
            continue;
        }
        ll left_sum = 0, max_left = LLONG_MIN;
        bool has_left = false;

        for (ll i = zero_index - 1; i >= 0 && s[i] == '1'; --i) {
            left_sum += arr[i];
            max_left = max(max_left, left_sum);
            has_left = true;
        }

        ll L = has_left ? max_left : 0;
        ll right_sum = 0, max_right = LLONG_MIN;
        bool has_right = false;

        for (ll i = zero_index + 1; i < n && s[i] == '1'; ++i) {
            right_sum += arr[i];
            max_right = max(max_right, right_sum);
            has_right = true;
        }

        ll R = has_right ? max_right : 0;

      
        ll x;
        if (L >= 0 && R >= 0) {
            x = k - L - R;
        }
        else if (L >= 0) x = k - L;
        else if (R >= 0) x = k - R;
        else x = k;
        cout << "Yes\n";
        for (ll i = 0; i < n; ++i) {
            if (s[i] == '0') {
                if (i == zero_index) cout << x;
                else cout << NEG_INF;
            } else {
                cout << arr[i];
            }
            cout << (i + 1 < n ? ' ' : '\n');
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