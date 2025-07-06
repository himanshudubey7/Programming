//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    string s1, s2;
    cin>>s1>>s2;
    // cout<<s1<<" "<<s2<<endl;
    char ch = s1[0];
    char chr = s2 [0];
    s1[0] = s2[0];
    s2[0] = ch;
    
    cout<<s1<<" "<<s2<<endl;
}
    return 0;
}