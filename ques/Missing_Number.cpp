//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
 vector<bool>v(N,0);
int main(){
    long long n;
    cin>>n;
for(int i = 0;i<n-1;i++){
    int x;
    cin>>x;
    v[x] = true;
}
for(int i  =1;i<=n;i++){
    if(!v[i]){
        cout<<i<<endl;
        break;
    }

}
    return 0;
}