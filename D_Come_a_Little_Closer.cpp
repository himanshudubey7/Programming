#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = 1e18;

struct P {
    ll x, y;
};

ll calcArea(const vector<P>& v) {
    ll lx = v[0].x, rx = v[0].x, ly = v[0].y, ry = v[0].y;
    for (const auto& p : v) {
        lx = min(lx, p.x);
        rx = max(rx, p.x);
        ly = min(ly, p.y);
        ry = max(ry, p.y);
    }
    return (rx - lx + 1) * (ry - ly + 1);
}

ll solve(vector<P>& v) {
    int n = v.size();
    map<ll, int> cx, cy;
    vector<ll> vx, vy;

    for (const auto& p : v) {
        vx.push_back(p.x);
        vy.push_back(p.y);
        cx[p.x]++;
        cy[p.y]++;
    }

    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());

    ll x1 = vx[0], x2 = vx[n - 1], x3 = vx[1], x4 = vx[n - 2];
    ll y1 = vy[0], y2 = vy[n - 1], y3 = vy[1], y4 = vy[n - 2];

    ll base = (x2 - x1 + 1) * (y2 - y1 + 1), ans = base;

    for (int i = 0; i < n; ++i) {
        ll x = v[i].x, y = v[i].y;

        ll nx1 = (x == x1 && cx[x1] == 1) ? x3 : x1;
        ll nx2 = (x == x2 && cx[x2] == 1) ? x4 : x2;
        ll ny1 = (y == y1 && cy[y1] == 1) ? y3 : y1;
        ll ny2 = (y == y2 && cy[y2] == 1) ? y4 : y2;

        ll w = nx2 - nx1 + 1, h = ny2 - ny1 + 1;
        ll a = w * h;

        if (a == n - 1) a += min(w, h);

        ans = min(ans, a);
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<P> v(n);
        for (auto& p : v) cin >> p.x >> p.y;

        if (n == 1) {
            cout << "1\n";
            continue;
        }

        cout << solve(v) << '\n';
    }

    return 0;
}
