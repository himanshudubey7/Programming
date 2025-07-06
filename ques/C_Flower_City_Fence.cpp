//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
int ar[N];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p = n;
int flag = 0;
        for(int i = 0;i<n;i++){
           cin>>ar[i];
        }
        for(int i = 0;i<n;i++){
            if(ar[i]!= p){
                flag = 1;
                break;
            }
            else{
               
            }
        }
if(flag == 1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

    }
    return 0;
}