//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
void solve(){
            long long  n, k;
    
        cin>>n>>k;
        long long ar[n] ;
        for(long long i= 0;i<n;i++){
            cin>>ar[i];
        }
      vector<int> v;
       for(long long i= n-1;i>=0;i--){
        v.push_back(ar[i]);
       }
       int cnt = 0;
       for(int i= 0;i<n;i++){
        if(k<=0){
            break;
        }
      k -= ar[i];
      if(k >=0){
        cnt++;
      }
      k-=v[i];
      if(k>=0){
        cnt++;
      }
       }
       cout<<cnt<<endl;

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