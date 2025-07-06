#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<int, int> conquerIsland(int N, const vector<int>& A) {
    int minTime = INT_MAX;
    int bestClan = 0;

    for (int i = 1; i <= N; ++i) {
        int timeRequired = 0;

        // Count territories conquered to the left
        int leftConquer = i - 2;
        while (leftConquer >= 0 && A[leftConquer] == A[i - 1]) {
            timeRequired++;
            leftConquer--;
        }

        // Count territories conquered to the right
        int rightConquer = i;
        while (rightConquer < N && A[rightConquer] == A[i - 1]) {
            timeRequired++;
            rightConquer++;
        }

        if (timeRequired < minTime || (timeRequired == minTime && A[i - 1] < bestClan)) {
            minTime = timeRequired;
            bestClan = A[i - 1];
        }
    }

    return make_pair(bestClan, minTime);
}

int main() {
    int N = 8;
    vector<int> A = {1, 1, 2, 3, 1, 2, 2, 3};

    pair<int, int> result = conquerIsland(N, A);

    cout << "Best Clan: " << result.first << endl;
    cout << "Minimum Time: " << result.second << endl;

    return 0;
}
