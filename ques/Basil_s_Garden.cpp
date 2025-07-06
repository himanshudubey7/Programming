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
    vector<ll> ht;
    for(int i= 0;i<n;i++){
        int x;
        cin>>x;
        ht.push_back(x);
    }
    ll pop = 0;
    // map<int , int> mp;
    // for(int i= 0;i<n;i++){
    //     mp[ht[i]]++;
    // }
    vector<ll> mp;
    
    for(int i = 0;i<n;i++){
        ll temp = ht[i]+i;
       mp.push_back(temp);
    }
    for(int i= 0;i<n;i++){
        pop =max(pop, mp[i]);
    }
    cout<<pop<<endl;

}
    return 0;
}