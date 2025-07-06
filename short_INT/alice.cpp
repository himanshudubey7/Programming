// author: Ghostyy :D
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                      
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll const mod = 1e9+7;

//--------------------------------------------------------------------------------------------------
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        set<ll> alice;
        ll ans = 0;
        ll alice_score = 0;

        ll cnt1 = 0;
        for (int j = 30; j >= 0; j--)
        {
            ll cnt = 0;
            ll prev_var = -1;
            // ll b = -1;
            for (int i = 0; i < n; i++)
            {
                if (ar[i] >= (1 << j) && ar[i] < (1 << (j + 1)))
                {
                    cnt++;
                    if (cnt >= 2)
                    {
                        alice.insert(prev_var);
                        alice.insert(i);
                        // bob.push_back(ar[i]);
                    }
                    prev_var = i;
                }
            }

            if (alice.size() >= 2)
            {
                ll num1 = alice.size();
                vector<ll> alice_num1;

                for (auto it : alice)
                {
                    alice_num1.push_back(ar[it]);
                }
                sort(alice_num1.begin(), alice_num1.end());
                ll alice_sum = 0;
                for(ll i= 0;i<num1;i++){
                    alice_sum +=alice_num1[i];
                }
                // int alice_sum = accumulate(alice_num1.begin(), alice_num1.end(), 0);

                for (int i = num1 - 1; i >= 0; i--)
                {
                    int left = i;
                    alice_sum -= long(alice_num1[i]);
                    alice_score += long(left) * alice_num1[i] - alice_sum;
                }
                alice.clear();
                alice_num1.clear();
            }

            ans += cnt * (cnt - 1) / 2;
        }

        // cout << "the score of the alice is = " << alice_score << endl;
        ll total_score = 0;
        sort(ar.begin(), ar.end());
        ll total_sum = 0;
        for(ll i = 0;i<n;i++){
            total_sum+=ar[i];
        }
        // ll total_sum = (accumulate(ar.begin(), ar.end(), 0))%mod;
        // cout<<"total sum = "<<total_sum<<endl;

        for (int i = n - 1; i >= 0; i--)
        {
            int left = i;
            total_sum -= (long(ar[i]));
            total_score += (long(left) * ar[i] - total_sum);
        }
        // cout << "total score is = " << total_score << endl;

        // calculating the answer:
        ll bob = (total_score - alice_score);
        cout<<bob<<endl;
}
}

//--------------------------------------------------------------------------------------------------
int main()
{
    fast
    //  freopen("in06.txt", "r", stdin);
    //   freopen("out06.txt", "w", stdout);
    solve();
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}