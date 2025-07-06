//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int ar[n];
        int br[n];
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        for(int i = 0;i<n;i++){
            cin>>br[i];
        }
        int exp = ar[0];
        int maxm = INT_MIN;
      for(int i = 0;i<n-1;i++){

        for(int j = 0;j<=i;j++){
            maxm = max(br[j], maxm);
        }

        if(ar[i+1]>=maxm && k>0){
            exp+= ar[i+1];
            k--;

        }
        else if(ar[i+1]<maxm && k>0){
            exp = exp + maxm;
            k--;
        }
      }
cout<<k<<endl;
      while(k!=0){
        exp = exp+maxm;
        k--;
      }
        cout<<exp<<endl;
    }
    return 0;
}