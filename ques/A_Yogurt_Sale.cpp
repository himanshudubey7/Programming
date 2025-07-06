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
        int n,a,b;
        cin>>n>>a>>b;
        if((2*a) < b){
            // cout<<"hwllo"<<endl;
            cout<<(n*a)<<endl;
        }
        else{
            // cout<<"heiiio "<<endl;

            int temp = n%2;
            // cout<<temp<<endl;
            n = n/2;
            if(!temp){
                cout<<(b*n)<<endl;
            }
            else{
                cout<<b*n + a<<endl;
            }


                    }
    }
    return 0;
}