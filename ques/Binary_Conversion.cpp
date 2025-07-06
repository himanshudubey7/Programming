// author: Ghostyy :D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vi;
typedef pair<long, long> pi;
typedef set<long> stl;
typedef set<char> stc;
typedef set<string> sts;
typedef map<long, long> mpll;
typedef map<int, char> mpic;
typedef map<char, int> mpci;
typedef map<int, string> mpis;
typedef map<string, int> mpsi;
typedef map<string, string> mpss;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
ll mod = 1000000007;

// binary exponentiation
int exp(int base, int n)
{
    int res = 1;
    while (n)
    {
        if (n % 2)
        {
            res = res * base;
            n--;
        }
        else
        {
            base *= base;
            n /= 2;
        }
    }
    return res;
}

// sieve of erastothenes
vector<int> primes; // stores ith prime number at index i-1
ll is_prime[1000001];

void sieve()
{
    int maxN = 1000000;
    for (int i = 1; i <= maxN; i++)
        is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= maxN; i++)
    {
        if (is_prime[i])
            primes.push_back(i);
    }
}

// primality check - checks if a number is prime or not
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
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

void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        int same = 0;
        int diff = 0;
        int cnt0ins = 0;
        int cnt1ins = 0;
        int cnt0int = 0;
        int cnt1int = 0;
int res= 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[i])
            {
                same++;
                if (s[i] == '0')
                {
                    cnt0ins++;
                    cnt0int++;
                }
                else
                {
                    cnt1ins++;
                    cnt1int++;
                }
            }
            else
            {
                diff++;
                res+= s[i]-'0';
                if (s[i] == '0')
                {
                    cnt0ins++;
                    cnt1int++;
                }
                else
                {
                    cnt1ins++;
                    cnt0int++;
                }
            }
        }

        // cout<<same<<" "<<diff<<endl;
        // cout<<cnt1ins<<" "<<cnt0ins<<endl;
        // cout<<res<<endl;
        if(s ==t && ((s == "01")||(s == "10"))&& k%2 ==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(diff == 2 && s.size() ==2 && k%2 == 0){
            cout<<"NO"<<endl;
            continue;
        }
        if(diff == res*2 && res <=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // if (cnt0ins == cnt0int && cnt1ins == cnt1int)
        // {
        //     if (n == 2 && (diff == 1) && (k%2 !=0))
        //     {

        //         cout << "YES" << endl;
        //     }
        //     else if (n == 2 && same == 2)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else if (n > 2 && diff <= k)
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}

int main()
{
    fast
    solve();
    return 0;
}