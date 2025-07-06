// author: Ghostyy :D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
ll mod = 1000000007;

//--------------------------------------------------------------------------------------------------
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
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
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
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
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
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// An iterative binary search function and return  the index.
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
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        vector<ll> ans;
        int ind = 0;
        int final = -1;
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        for (int i = 0; i < n; i++)
        {
            if(ar[i] == 0)
            ind++;
        }
        if(ind ==n){
        cout<<0<<endl;
        cout<<endl;
        continue;
        }
        ind = 0;

        for (int i = 0; i < 40; i++)
        {
            ll cnt = 0;
            sort(ar, ar + n);

            // for (int j = 0; j < n; j++)
            // {
            //     cout << ar[j] << " ";
            // }
            // cout << endl;
            // cout << endl;
            // cout << endl;

            ll avg = (ar[0] + ar[n - 1]) / 2;
            ans.push_back(avg);
            for (int j = 0; j < n; j++)
            {
                ar[j] = abs(ar[j] - avg);
            }
            for (int j = 0; j < n; j++)
            {
                if (ar[j] != 0)
                {
                    break;
                }

                else
                {
                    cnt++;
                }
            }

            // cout<<cnt<<endl;
            // cout<<endl;
            // cout<<endl;

            if (cnt == n)
            {
                ind = i + 1;
                final = 1;
                break;
            }
        }
        if (final == 1)
        {
            cout << ind << endl;
            for (auto it : ans)
                cout << it << " ";
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
            // for (auto it : ans)
            //     cout << it << " ";
            // cout << endl;
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