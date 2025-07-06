#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

   while(t--){
        string a, b;
        cin >> a >> b;

        if (a[0] == b[0]) {
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }

        if (a.back() == b.back()) {
            cout << "YES" << endl;
            cout << "*" << a.back() << endl;
            continue;
        }

        bool found = false;
        for (int i = 0; i < b.length() - 1; ++i) {
            string sub = b.substr(i, 2);
            if (a.find(sub) != string::npos) {
                cout << "YES" << endl;
                cout << "*" << sub << "*" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }


    return 0;
}
