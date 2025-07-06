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
        int a, b,c, d;
        cin>>a>>b>>c>>d;
        int cnt = 0;
        if(b>a )
        cnt++;
        if(c>a)
        cnt++;
        if(d>a)
        cnt++;
        cout<<cnt<<endl;

    }
    return 0;
}