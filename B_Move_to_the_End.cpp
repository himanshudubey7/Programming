#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<ll> suffix(n+1, 0); 
        for(int i = n-1; i >=0; i--){
            suffix[i] = suffix[i+1] + a[i];
        }

        // Build prefix maximum
        vector<ll> prefMax(n);
        prefMax[0] = a[0];
        for(int i=1; i<n; i++){
            prefMax[i] = max(prefMax[i-1], a[i]);
        }

        for(int k = 1; k <= n; k++){
            ll base_sum = suffix[n-k];
            ll ans = base_sum;

            if(n-k-1 >= 0){ 
                ans = max(ans, base_sum - a[n-k] + prefMax[n-k-1]);
            }

            cout << ans << " ";
        }
        cout << endl;
    }
}
