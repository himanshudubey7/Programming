//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
  
        long long n;
        cin>>n;
        long long t;
        cin>>t;
        vector<long long> vt;
        int ar[n-1];
        for(int i = 0;i<n-1;i++){
            cin>>ar[i];
        }
        int i = 1;
      while(i<n){
        vt.push_back(i+ar[i-1]);
        i=  i+ar[i-1];
      }
      int flag = 0;
     for(auto it: vt){
        if(it == t){
            flag = 1;
            break;
        }
        // cout<<it<<endl;
     }
     if(flag){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    return 0;
}