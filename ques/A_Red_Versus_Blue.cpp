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
    int n , r, b;
    cin>>n>>r>>b;
    string s;
    for(int i= 0;i<n;i++){
        if((i+1)%2 != 0 && b!=0){
            cout<<"B";
            b--;
        }
        else{
            cout<<"R";
        }
    }
    cout<<endl;
}
    return 0;
}