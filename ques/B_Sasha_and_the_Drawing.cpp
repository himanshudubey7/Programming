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
        long long n,k;
        cin>>n>>k;
        if(k == 4*n-2){
            cout<<2*n<<endl;
            continue;
        }
        if(k%2 ==0){
            cout<<k/2<<endl;
        }
        else{
            cout<<k/2+1<<endl;
        }


    }
    return 0;
}