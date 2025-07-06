#include <bits/stdc++.h>
using namespace std;

int solution(int a, vector<int> b, int c) {
    vector<int> sorted_b = b;
    sort(sorted_b.begin(), sorted_b.end());

    auto check = [&](int x) {
        int threshold = sorted_b[a - x];
        vector<int> nums(a);
        for (int i = 0; i < a; i++) {
            nums[i] = (b[i] >= threshold) ? 1 : -1;
        }

        map<int, int> mp;
        mp[0] = -1;
        int curr = 0;
        for (int i = 0; i < a; i++) {
            curr += nums[i];
            if (mp.find(curr - 1) != mp.end() && i - mp[curr - 1] >= c) {
                return true;
            }
            if (mp.find(curr) == mp.end()) {
                mp[curr] = i;
            }
        }
        return false;
    };

    int low = 1, high = a;
    int ans = a;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int c;
    cin >> c;
    int res = solution(n, ar, c);
    cout << res << endl;
    return 0;
}