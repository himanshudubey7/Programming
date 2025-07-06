//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int ar[n];
        int pre[n];
        for(int i= 0;i<n;i++){
            cin>>ar[i];
        }
        pre[0] = ar[0];
        for(int i = 1;i<n;i++){
            pre[i] = pre[i-1]+ar[i];
        }
        int flag =0;
        int day = 0;
        for(int i= 1;i<=n;i++){
            int temp = i*k;
            if(temp>pre[i-1]){
                day = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<"NO"<<" "<<day<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
