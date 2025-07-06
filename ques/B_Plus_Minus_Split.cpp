//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0;
        int cnt2= 0;
        for(int i= 0;i<n;i++){
            if(s[i]=='+')
            cnt1++;
            else
            cnt2++;
        }
        int p = abs(cnt1-cnt2);
        cout<<p<<endl;
    }
    return 0;
}