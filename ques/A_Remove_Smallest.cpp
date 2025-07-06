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
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int flag = 0;
        sort(ar,ar+n);
        for(int i = 0;i<n-1;i++){
            if(ar[i+1]-ar[i] >1){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}


/*

1,2,2,3,4,5
1,2,3,3,4,6

*/