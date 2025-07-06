//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
// int t;
// cin>>t;
// while(t--){
    int n;
    cin>>n;
    int m = INT_MAX;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        m= min(m, (abs(0-x)));
    }
    cout<<m<<endl;
// }
    return 0;
}