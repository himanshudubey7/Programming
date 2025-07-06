#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    string binaryString;
    cin >> binaryString;
    int n = binaryString.size();
    
    // Array to store the number of substrings with exactly k ones
    vector<ll> countSubstringsWithKOnes(n + 1, 0);
    
    // Hashmap to keep track of prefix sums (how many times a certain prefix sum has been seen)
    unordered_map<int, int> prefixOnesCount;
    prefixOnesCount[0] = 1;  // There is one way to have zero ones initially

    int currentOnes = 0;  // This will track the current number of ones encountered so far

    // Iterate through the binary string
    for (int i = 0; i < n; i++) {
        // Update the current number of ones encountered
        currentOnes += (binaryString[i] == '1');
        
        // Check for all possible k (number of ones in substrings)
        for (int k = 0; k <= currentOnes; k++) {
            // We want substrings that end at i and have exactly k ones
            if (prefixOnesCount.count(currentOnes - k)) {
                countSubstringsWithKOnes[k] += prefixOnesCount[currentOnes - k];
            }
        }
        
        // Update the prefix sum map with the current number of ones
        prefixOnesCount[currentOnes]++;
    }

    // Output the result
    for (int i = 0; i <= n; i++) {
        cout << countSubstringsWithKOnes[i] << (i == n ? '\n' : ' ');
    }

    return 0;
}
