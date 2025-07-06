//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    int cnt =0;
    for(int i= 0;i<n;i++){
        if(ar[i] == i+1 && i !=n-1){
            cnt++;
            i++;
        }
    }
    cout<<cnt<<endl;
}
    return 0;
}