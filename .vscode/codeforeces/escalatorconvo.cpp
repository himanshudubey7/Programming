//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m , k,v_h;
        cin>>n>>m>>k>>v_h;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            int h;
            cin>>h;
            int diff = abs(v_h - h);
            if(diff%k == 0 && diff<m*k && diff>=k){
                cnt++;

            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}