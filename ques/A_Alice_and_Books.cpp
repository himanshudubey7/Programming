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
  ll ar[n];
  for(int i = 0;i<n;i++){
    cin>>ar[i];
  }
  ll p= INT_MIN;
  ll ind= 0;
  for(int i= 0;i<n;i++){
    if(ar[i]>= p){
        ind = i;
        p = ar[i];
    }

  }
  ll temp = INT_MIN;
  if(ind == n-1){
    for(int i= 0;i<n;i++){
        if(i == ind)
        continue;
        temp = max(ar[i], temp);

    }
    cout<<ar[ind]+temp<<endl;
  }
  else{
    cout<<ar[n-1]+ar[ind]<<endl;
  }
  }
    return 0;
}