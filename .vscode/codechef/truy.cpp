#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    int freq[26] = {0};
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    int max_freq = 0;
    for(int i=0;i<26;i++){
        max_freq = max(max_freq,freq[i]);
    }
    cout<<max_freq<<endl;
    return 0;
}

