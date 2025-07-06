#include <bits/stdc++.h>


using namespace std;

int findOptimalX(int A, int B) {
    int min_difference = INT_MAX;
    int optiX = 0;

    for (int X = 0; X < pow(2, 30); X++) {
        int difference = abs((A ^ X) - (B ^ X));
        if (difference < min_difference) {
            min_difference = difference;
            optiX = X;
        }
    }

    return optiX;
}

int main() {
    int A = 1234567890;
    int B = 987654321;

  
    int X = findOptimalX(A, B);


    cout  << X << endl;

    return 0;
}
