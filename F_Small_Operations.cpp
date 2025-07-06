#include<bits/stdc++.h>

using namespace std;

 const long long MV = 10000000LL; 
const int MO = 35;                

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    if (x == y) {
        cout << 0 << endl;
        return;
    }

    queue<pair<long long, int>> q;
    unordered_map<long long, int> d;

    q.push({x, 0});
    d[x] = 0;

    while (!q.empty()) {
        long long cx = q.front().first; // current_x
        int op = q.front().second;      // operations
        q.pop();

        if (op >= MO) {
            continue;
        }

        for (long long a = 1; a <= k; ++a) {
            long long nx;  // next_x
            if (cx > MV / a) {
                nx = MV + 1;
            } else {
                nx = cx * a;
            }

            if (nx > 0 && nx <= MV) {
                if (nx == y) {
                    cout << op + 1 << endl;
                    return;
                }
                if (d.find(nx) == d.end()) {
                    d[nx] = op + 1;
                    q.push({nx, op + 1});
                }
            }
        }

        for (long long a = 1; a <= k; ++a) {
            if (cx % a == 0) {
                long long nx = cx / a;

                if (nx == y) {
                    cout << op + 1 << endl;
                    return;
                }
                if (d.find(nx) == d.end()) {
                    d[nx] = op + 1;
                    q.push({nx, op + 1});
                }
            }
        }
    }

    cout << -1 << endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}