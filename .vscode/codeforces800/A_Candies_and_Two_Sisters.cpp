//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
     if(n%2 == 0)
     cout<<(n/2)-1<<"\n";
     else
     cout<<(n/2)<<"\n";
    }
    return 0;
}