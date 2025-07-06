//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i= 0;i<n;i++){
            cin>>ar[i];
        }
        int br[n];
        for(int i =0;i<n;i++){
            br[i] = (n+1) -ar[i];
        }
        for(int i= 0;i<n;i++){
            cout<<br[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}