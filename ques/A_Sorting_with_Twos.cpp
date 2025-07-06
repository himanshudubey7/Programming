//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int ar[n];
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
      int j = 0;
      long long p =1;
      int flag = 0;
      while(j<n){
        for(int i =j+1;i<min(n,p);i++){
            if(ar[i]<ar[i-1]){
                flag =1;
                break;
            }
        }
        j=p;
        p*=2;
      }
      if(flag ==1){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    return 0;
}