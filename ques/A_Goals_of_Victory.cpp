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
    int n;
    cin>>n;
    ll sum = 0;
    for(int i = 0;i<n-1;i++){
        int x;
        cin>>x;
        sum +=x;
    }
    cout<<(-sum)<<endl;
}
    return 0;
}