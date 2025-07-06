//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
    int p = max(a,b);
    int k = min(a,b);
    if((c<p && c>k)|| (d<p && d>k))
    cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}