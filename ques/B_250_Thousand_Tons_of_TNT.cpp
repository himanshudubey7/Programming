//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int minm = INT_MAX;
        int maxm =INT_MIN;
        for(int i = 0;i<n;i++){
            long long x;
            cin>>x;
            if(x>=maxm){
                maxm = x;
            }
            if(x<=minm){
                minm = x;
            }

        }
        cout<<maxm -minm<<endl;
    }
    return 0;
}