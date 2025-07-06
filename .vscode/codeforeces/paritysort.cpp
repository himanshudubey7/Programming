#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if ((arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) || (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0)) {
                if (arr[i] > arr[i + 1]) {
                    sorted = false;
                    break;
                }
            }
        }

        if (sorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
