//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n,t;
    cin>>n>>t;
    if(t ==10){
        if(n == 1){
            cout<<-1<<endl;
        }
        else{
            for(int i= 1;i<=n-1;i++){
                cout<<"1";
            }
            cout<<"0"<<endl;
        }
    }
    else{
        for(int i= 1;i<=n;i++){
            cout<< t;
        }
    }
    return 0;
}