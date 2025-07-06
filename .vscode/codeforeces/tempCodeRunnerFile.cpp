//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
int hsh[N];
void reset (int ar[]){
    for(int i = 0;i<N;i++){
        ar[i] = 0;
    }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        reset(hsh);
        int n , k;
        cin>>n>>k;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            hsh[x]++;
        }
        int flag =0;
        for(int i= 0;i<n;i++){
            if(hsh[i]%k ==0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}