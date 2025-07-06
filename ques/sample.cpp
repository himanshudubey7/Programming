#include <iostream>
#include <vector>

using namespace std;

int max_sum_subarray_with_diff_parity(const vector<int>& arr) {
    int n = arr.size();

    // Create an array to store the maximum sum subarray with different parity ending at each index
    vector<int> dp(n, 0);

    // Initialize the first element
    dp[0] = arr[0];

    // Iterate through the array to fill in the dp array
    for (int i = 1; i < n; ++i) {
        // If the current element has a different parity than the previous sum, include it in the subarray
        if (arr[i] % 2 != arr[i - 1] % 2) {
            dp[i] = dp[i - 1] + arr[i];
        } else {
            dp[i] = arr[i];
        }
    }

    // Find the maximum value in the dp array
    int max_sum = *max_element(dp.begin(), dp.end());

    return max_sum;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int result = max_sum_subarray_with_diff_parity(arr);
    
    cout << "Maximum sum subarray with different parity: " << result << endl;

    return 0;
}
