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
    int n, k;
    cin>>n>>k;
    if(k == 1){
        cout<<n<<endl;
        continue;
    }
    int time = 1;
n = n-1;
    while(n--){
        time = time+k;
    }
    cout<<time<<endl;
}
    return 0;
}