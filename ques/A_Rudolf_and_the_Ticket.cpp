//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t ;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int ar[n];
        int br[m];
        for(int i = 0 ;i<n;i++){
            cin>>ar[i];
        }
        for(int i =0;i<m;i++){
            cin>>br[i];
        }
        sort(ar, ar+n);
        sort(br, br+m);
        int ways = 0;
        for(int i = 0;i<n;i++){
            if(ar[i]<=k){
            for(int j = m-1;j>=0;j--){
                if(ar[i]+br[j]<=k){
                    ways += j+1;
                    break;
                }
            }
            }
        }
        cout<<ways<<endl;
    }
    return 0;
}