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
        int cnt= 0;
        for(int i = 1;i<=n;i++){
            int x;
            cin>>x;
            if(x == i)
            cnt++;
        }
        if(cnt%2 !=0)
       cout<<(cnt/2)+1<<endl;
       else
       cout<<cnt/2<<endl;

    }
    return 0;
}