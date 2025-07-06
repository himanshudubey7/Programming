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
    ll n;
    cin>>n;
    int ar[10];
    ar[1] = 1;
    for(int i = 2;i<=9;i++){
        ar[i] = i + ar[i-1];
    }
    ll ans= (n/9)*45;
    ll rem = n%9;
    cout<<ans+ ar[rem]<<endl;
}
    return 0;
}