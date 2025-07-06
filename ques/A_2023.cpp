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
        int n,k;
        cin>>n>>k;
        int flag = 0;
        long long  pro  =1;
        int ar[n];
        for(int i= 0;i<n;i++){
            cin>>ar[i];
        }
        for(int i = 0;i<n;i++){
           
            if(2023%ar[i] !=0){
                flag = 1;
                break;
            }
            pro *=ar[i];
           
        }
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }
        if(2023%pro == 0){
            cout<<"YES"<<endl;
            for(int i = 1 ;i<=k-1;i++){
                cout<<1<<" ";
            }
            cout<<(2023/pro)<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

}
    return 0;
}