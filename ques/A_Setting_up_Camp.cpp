//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
       long long a,b,c;
       cin>>a>>b>>c;
       long long total = a;
     long long need = (3- b%3);
     if(b%3>0 && need> c){
        cout<<-1<<endl;
        continue;
     }
     c -= need;
     b += need;
     total += c/3+ (c%3+1)/2 + b/3;
     cout<<total<<endl;

    }
    return 0;
}