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
        int lwn = 2*n;
        int ar[2*n];
        for(int i = 0;i<lwn ;i++){
            cin>>ar[i];
        }
        sort(ar, ar+lwn);
        int score = 0;
        for(int i = 1;i<lwn ;i=i+2){
            score += min(ar[i], ar[i-1]);
        }
        cout<<score<<endl;;
    }
    return 0;
}