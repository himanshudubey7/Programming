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
    ll n ;
    cin>>n;
    ll ar[n];
    for(int i= 0;i<n;i++){
        cin>>ar[i];
    }
    int p = ar[0];
    ll coins = 0;
    ll s = 0;
    map<ll ,ll> mp;
    for(int i= 0;i<n;i++){
        if(ar[i]>=p){
            p = ar[i];
        }
        else{
            ll diff = p-ar[i];
        coins += diff;
        s= max(s, diff);
        ar[i] = p;
        }
    }
    // for(auto it: mp){
    //     coins+= ((it.first)* (it.second))+1;
    // }
coins+=s;
    cout<<coins<<endl;
}
    return 0;
}