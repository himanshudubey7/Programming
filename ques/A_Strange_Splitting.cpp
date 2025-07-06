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
    ll n;
    cin>>n;
    ll ar[n];
ll br[n];
    for(int i= 0;i<n;i++){
        cin>>ar[i];
        br[i] = ar[i];
    }
    sort(br, br+n);
    int flag = 0;
    int f = 0;
    if((br[n-1]-br[0]) ==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i =  0;i<n;i++){
            if(ar[i] == br[n-2] && f == 0){
                cout<<"B";
                f=1;
            }
            else{
                cout<<"R";
            }
        }
       
        cout<<endl;
    }


}
    return 0;
}