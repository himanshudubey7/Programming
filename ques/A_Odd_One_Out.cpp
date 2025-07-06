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
        int a,b,c;
        cin>>a>>b>>c;
        if(a== b ){
            cout<<c<<endl;
        }
        else if(b == c){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}