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
        for(int i = 0;i<n;i++){
            cin>>ar[i];

        }
        // for(int i= 1;i<=n;i++){
        //     cout<<ar[i]<<" ";

        // }
        int flag = 0;

      for(int i= 1 ;i<=n;i++){
        int x = ar[i-1];
        int y = ar[x-1];
        if( y == i ){
            // cout<<"Hello"<<endl;
            flag =1;
            break;
        }
        // cout<<ar[i]<<" "<<ar[x]<<endl;
      }
      if(flag){
        cout<<2<<endl;
      }
      else{
        cout<<3<<endl;
      }
    }
    return 0;
}