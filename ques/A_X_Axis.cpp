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
    int ar[3];
    for(int i = 0;i<3;i++){
        cin>>ar[i];
    }
    sort(ar, ar+3);
    int dist = abs(ar[1]-ar[0])+abs(ar[1]-ar[2]);
    cout<<dist<<endl;


}
    return 0;
}