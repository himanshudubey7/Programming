#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
       vector<int> vt;

            string p = "";
               for(int i = 0;i<k;i++){
                p+='0';
            }
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int j = 0;
            int f = 0, ff = 0;
         
            for (int j = 0; j < k; j++) {
                if (s[j] == '1') {
                    f++;
                    ff = j;
                }
            }
            if (f == 1 ) {
                p[j] = '1';
            }
        }
int flag = 0;
cout<<p<<endl;
for(int i = 0;i<k;i++){
    if(p[i] == '0'){
    flag  = 1;
    break;
    }
}
        if (!flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" <<endl;
        }
    }

    return 0;
}

