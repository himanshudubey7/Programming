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

        int inversions = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((arr[i] > arr[j]) && ((arr[i] % 2 == 0 && arr[j] % 2 == 0) || (arr[i] % 2 != 0 && arr[j] % 2 != 0))) {
                    swap(arr[i], arr[j]);
                }
            }
        }
int flag  = 1;
       for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        {
            flag = 0;
            cout<<"NO"<<endl;
            break;
        }
       }
    if(flag == 1)
    cout<<"YES"<<endl;
    }

    return 0;
}
