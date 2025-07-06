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
    vector<ll> put;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    int p = INT_MIN;
  for(int i= 1;i<n;i++){
     p = max(ar[i], ar[i-1]);
     put.push_back(p);
  }
  sort(put.begin(), put.end());
  cout<<put[0]-1<<endl;
}
    return 0;
}