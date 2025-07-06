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
        long long ar[n];
        int p = 1;
        for(int i = 0;i<n;i++){
            ar[i] = p;
             p+= 2;
        }

        for(int i = 0;i<n;i++){
            cout<<ar[i]<<" ";
        }
       
        cout<<endl;



    }
    return 0;
}