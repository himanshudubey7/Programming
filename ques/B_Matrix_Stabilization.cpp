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
    ll n, m;
    cin>>n>>m;
    int f1= 0;
    int f2 = 0;
    int f3 = 0;
    int f4 = 0;
    ll ar[n][m];
    for(int i = 0;i<n;i++){
        for(int j= 0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    vector<ll> p;
    for(int i = 0;i<n;i++){
          
        for(int j= 0;j<m;j++){
              ll val = 0;
            int f = 1;
          if(i-1>=0){
            val = max(val, ar[i-1][j]);
          }
         if(j-1>=0){
            val = max(val , ar[i][j-1]);
          }
           if(i+1<n){
            val = max(val , ar[i+1][j]);
            
          }
           if(j+1<m){
            val = max(val , ar[i][j+1]);
            // cout<<ar[i][j+1]<<endl;
          }
        //   cout<<val<<endl;
          if(i-1>=0 && ar[i][j]<=ar[i-1][j]){
            f = 0;
          }
          if(j-1>=0 && ar[i][j]<=ar[i][j-1]){
            f = 0;
          }
          if(i+1<n && ar[i][j]<=ar[i+1][j]){
            f = 0;
          }
          if(j+1<m && ar[i][j]<=ar[i][j+1]){
            f = 0;
          }
          if( f== 1){
            ar[i][j] = val;
            
          }


        }
    }
    for(int i= 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}