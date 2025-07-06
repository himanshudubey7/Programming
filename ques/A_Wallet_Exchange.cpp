//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t ;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        long long sum = a+b;
        if(sum%2==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
        
    }
    return 0;
}