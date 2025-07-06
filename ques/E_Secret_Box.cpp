// author: Ghostyy :D
#include <bits/stdc++.h>

#define ll long long

using namespace std;
const ll N = 1e5 + 10;
ll fdp(ll x, ll y, ll z, long long k)
{
    ll mp = 0;

    for (ll a = 1; a <= cbrt(k); ++a)
    {

        if (k % a == 0)
        {

            for (ll b = 1; b <= sqrt(k / a); ++b)
            {
                if ((k / a) % b == 0)
                {

                    ll c = k / (a * b);

                    if (a <= x && b <= y && c <= z)
                    {
                        mp = max(mp, (x - a + 1) * (y - b + 1) * (z - c + 1));
                    }
                    if (a <= x && c <= y && b <= z)
                    {
                        mp = max(mp, (x - a + 1) * (y - c + 1) * (z - b + 1));
                    }
                    if (b <= x && a <= y && c <= z)
                    {
                        mp = max(mp, (x - b + 1) * (y - a + 1) * (z - c + 1));
                    }
                    if (b <= x && c <= y && a <= z)
                    {
                        mp = max(mp, (x - b + 1) * (y - c + 1) * (z - a + 1));
                    }
                    if (c <= x && a <= y && b <= z)
                    {
                        mp = max(mp, (x - c + 1) * (y - a + 1) * (z - b + 1));
                    }
                    if (c <= x && b <= y && a <= z)
                    {
                        mp = max(mp, (x - c + 1) * (y - b + 1) * (z - a + 1));
                    }
                }
            }
        }
    }
    return mp;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        long long k;
        cin >> x >> y >> z >> k;
       cout<<(fdp(x, y, z, k))<<endl;
    }

    return 0;
}
