//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e9+7;
int main(){
    long long a, b, x, m, n, p, q;
    cin>>a>>b>>x>>m>>n>>p>>q;
    long long apop = a;
    long long bpop = b;
    while(x--){
        apop = ((a* p) - ((a*p*m)/(p)) + ((b*q*n)/(q)))%N;
        
         bpop = ((b* q) + ((a*p*m)/(p)) - ((b*q*n)/(q)))%N;
         a= apop;
         b = bpop;

           cout<<apop<<" "<<bpop<<endl;
    }
    cout<<apop<<" "<<bpop<<endl;
    
    return 0;
}