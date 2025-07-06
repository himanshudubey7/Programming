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
        long long a, b;
        cin>>a>>b;
        if(a == 1){
            cout<<b*b<<endl;
            continue;
        }
    
for(int i = 2 ;i<=(a*b);i++){
    if(a%i ==0 || b%i ==0){
        cout<<b*i<<endl;
        break;
    }
}
}
    return 0;
}