#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;
        int count = 0;
        for(int i = 0;i<n;i++){
            int x , y;
            cin>>x>>y;
            if(x>y){
                ++count;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}