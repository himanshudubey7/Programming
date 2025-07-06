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
    long long a , b;
    cin>>a>>b;

    if(a == b){
        cout<<0<<endl;
    }
   
    
else{
    long long cnt = 0;
        long long ans =abs( b -a);
       if(ans %10 == 0){
        cnt = ans/10;
       }
       else{
        cnt = ans/10+1;
       }
       cout<<cnt<<endl;
}
    
}
    return 0;
}