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
        int ar[n];
        int pre[n];
       
        for(int i = 0;i<n;i++){
            cin>>ar[i];
            
        }
      sort(ar, ar+n);
      if(ar[0] == ar[n-1]){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        cout<<ar[n-1]<<" "<<ar[0]<<" ";
        for(int i= 1;i<n-1;i++){
          cout<<ar[i]<<" ";
        }
        cout<<endl;
      }
    }
    
       return 0;
}