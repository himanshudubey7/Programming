//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
void solve(){
      ll n, c;
    cin>>n>>c;
    ll ar[n];
    for(int i= 0;i<n;i++){
        cin>>ar[i];
    }
    vector<ll> cost(n,0);
    cost[0] = 1;
    auto check = [&](){
    long long p = 0;
    for(int i= 0;i<n;i++){
        if(cost[i] == 0)
        continue;
        for(int j = 0;j<n;j++){
            if(cost[j] == 0){
                p+= ar[i]*ar[j];
            }
        }
    }
    if(p <=c){
        return true;
    }
    else{
        return false;
    }
    };
    if(check()){
        cout<< 1<<endl;
    }
    else{
        // cout<<"hello"<<endl;
        ll sz= 1;
        while(sz<n){
            ll m = -1;
            for(int i= 0;i<n;i++){
                if(cost[i] == 0 &&(m == -1 || ar[i]>ar[m])){
                    m= i;
                }
            }
                cost[m] = 1;
                sz++;
                if(check()){
                   cout<<sz<<endl;
                   return ;
                }
            }
        }
       
    }

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

int t;
cin>>t;
while(t--){
    solve();
  
   
}
    return 0;
}