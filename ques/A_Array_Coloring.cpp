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
        long long cnt = 0;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            if(x%2!=0){
                cnt++;
            }

        }
        if(cnt%2 !=0){
            cout<<"NO"<<"\n";
        }
        else
        cout<<"YES"<<"\n";
    }
    
    return 0;
}