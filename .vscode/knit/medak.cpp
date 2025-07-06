#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_score(int N, vector<int>& A) {
    vector<int> dp(N);
    dp[N-1] = A[N-1];
    for (int i = N-2; i >= 0; i--) {
        int max_score = 0;
        for (int j = i+1; j <= min(i+A[i], N-1); j++) {
            int score = A[i] * (j-i) + dp[j];
            if (score > max_score) {
                max_score = score;
            }
        }
        dp[i] = max_score;
    }
    return (dp[0]-1);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << max_score(N, A) << endl;
    }
    return 0;
}
