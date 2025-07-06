//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a, b , c;
        cin>>a>>b>>c;
        int cnt = 0;
        if(a>b){
            while(a>b){
                a= a-c;
                b = b+c;
                cnt++;
            }
        }
        else if(a<b){
            while(a<b){
                b = b-c;
                a = a+c;
                cnt++;
            }
        }

        cout<<cnt<<endl;

    }
    return 0;
}