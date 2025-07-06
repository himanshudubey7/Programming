//author: Ghostyy :D
#include<bits/stdc++.h>
#define ll long long
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
        for(int i= 0;i<n;i++){
            cin>>ar[i];
        }
        int p1 = ar[0];
        int p2 = ar[0];

        cout<<1;
        for(int i = 1;i<n;i++){
            if(ar[i]>=p1 && ar[i]<=p2){
                cout<<1;
            }
            else if(ar[i]) {
                cout<<0;
            }
            if(ar[i]<p1){
                p1 = ar[i];
            }
          


        }

    }
    return 0;
}