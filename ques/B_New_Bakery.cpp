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
    ll n, a,b;
    cin>>n>>a>>b;
    if(a>b){
        cout<<(n*a)<<endl;
        continue;
    }
    ll sum = 0;
    ll k = min(n, b-a);
   sum = ((b+ (b-k+1))/2)*k + (n-k)*a;
 cout<<sum<<endl;
}
    return 0;
}