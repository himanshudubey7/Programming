#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0, tilecount = 0;
    cin >> n;
    vector<vector<char>> ch(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++) {
            ch[i][j] = str[j];
            if (ch[i][j] == '.') {
                count++;
            }
        }
    }

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (ch[i][j] == '.') {
                if (ch[i - 1][j] == '.' && ch[i + 1][j] == '.' && ch[i][j + 1] == '.' && ch[i][j - 1] == '.') {
                    tilecount++;
                }
            }
        }
    }
    cout<<tilecount<<endl;
    cout<<count<<endl;

    if (tilecount == (count / 5) && count % 5 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
