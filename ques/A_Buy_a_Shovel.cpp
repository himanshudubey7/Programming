//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int k,r;
    cin>>k>>r;
    int ans = 0;
    for(int i = 1;i<=10;i++){
        if((k*i)%10 == 0 || (k*i)%10 == r){
            ans = i;
            break;


        }
    }
    cout<<ans<<endl;
    return 0;
}