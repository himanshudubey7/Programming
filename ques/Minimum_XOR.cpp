#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> ar(n);

     
        int up = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            up ^= ar[i];
        }

      


      int f=INT_MAX;
        for (int i = 0; i < n; i++) {
            int ans = up ^ ar[i]; 
            if(ans<=up){
               f = min(ans , f);
            }
            else{
                f = min(f, up);
            }
        }
         

        cout <<f<< endl;


    }

    return 0;
}
