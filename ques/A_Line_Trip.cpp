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
        int n, k;
        cin>>n>>k;
        int ar[n+1];
        ar[0] = 0;
        for(int i= 1;i<=n;i++){
            cin>>ar[i];
        }
        int temp = 0;
        for(int i= 1;i<=n;i++){
            int diff= ar[i] - ar[i-1];
            temp = max(temp , diff);
        }
        temp = max(temp, 2*(k-ar[n]) );
        cout<<temp<<endl;
    }
    return 0;
}