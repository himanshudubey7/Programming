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
        long long b[n];
        for(int i =0;i<n;i++){
            cin>>ar[i];
            b[i] = ar[i];
        }
        sort(b, b+n);
        int value  =0;
        for(int i= n-1;i>=0;i--){
            if(ar[i] != b[i])
            {
                value = b[i];
                break;
            }
        }
        cout<<value<<endl;
    }
    return 0;
}