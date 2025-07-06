//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ar[n];
      int cnt = 0;
      int flag = 0;
        for(int i= 0;i<n;i++){
            cin>>ar[i];
           if(ar[i]<0){
            cnt++;
           }
           if(ar[i] == 0){
            flag =1;
           }
        }
       // sort(ar, ar+n);
        if(cnt%2 !=0 || flag == 1){
            cout<<0<<endl;
           // cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
           cout<<1<<" "<<0<<endl;
        }
    }
    return 0;
}