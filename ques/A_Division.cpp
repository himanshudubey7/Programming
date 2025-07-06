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
        long long n;
        cin>>n;
        if(n<=1399){
            cout<<"Division 4"<<endl;
        }
        else if(n<=1599 && n>=1400){
            cout<<"Division 3"<<endl;
        }
        else if(n<=1899 && n>=1600){
            cout<<"Division 2"<<endl;
        }
        else{
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}