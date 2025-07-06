#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<ll, ll>> vp1, vp2;

    for (int i = 0; i < n; i++) {
        int x, u;
        cin >> x >> u;
        vp1.push_back({x, u});
    }
    for (int i = 0; i < m; i++) {
        int x, u;
        cin >> x >> u;
        vp2.push_back({x, u});
    }
    
    unordered_map<ll, int> dist_map;
    
    for (const auto &point : vp2) {
        int p = point.first;
        int q = point.second;
        ll dist_squared = (ll)p * p + (ll)q * q;
        dist_map[dist_squared]++;
    }
    
    ll ans = 0;
    for (const auto &point : vp1) {
        int x = point.first;
        int y = point.second;
        ll dist_squared = (ll)x * x + (ll)y * y;
        
        if (dist_map[dist_squared] > 0) {
            ans++;
            dist_map[dist_squared]--; 
        }
    }
    
    cout << ans << endl;
    return 0;
}