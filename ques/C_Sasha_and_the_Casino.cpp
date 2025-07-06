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
        long long k , x, a;
        cin>>k>>x>>a;
       if(x == k){
        cout<<"NO"<<endl;
       }
       else if((k*a)>(x*a)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    }
    return 0;
}