//author: Ghostyy :D
#include<bits/stdc++.h>

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
       long long ar[n];
long long m = INT_MIN;
       for(int i = 0;i<n;i++){
        cin>>ar[i];
        // m =max(m, ar[i]);
       }
      long long ans = m;
      sort(ar, ar+n);
    int flag = 0;
       for(int i = 0;i<n;i++){
     for(int j= i+1;j<n;j++){
        if(__gcd(ar[i],ar[j])<=2){
            flag = 1;
            break;
        }
     }
     if(flag)
     break;
       }
    //    cout<<ans<<endl;
       if(flag){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
    }
    return 0;
}