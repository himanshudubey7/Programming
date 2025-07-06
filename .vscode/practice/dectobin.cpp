//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    int i = 0;
    int ans = 0;
    while(n!=0){
        int bit  = n&1;
        ans = (bit* pow(10,i))+ans;
        n= n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}