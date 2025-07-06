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
        int n;
        cin>>n;
                    long long  p = 3, q = 4;
            long long m = n/2;
        if(n%2 ==0){

            cout<<m<<endl;
           while(m--){
                cout<<p<<" "<<q<<endl;
                 p += 2;
                 q = p+1;
           }
            
        }
        else{
            cout<<m+1<<endl;
         while(m--){
            
         }
            
        }
    }
    return 0;
}