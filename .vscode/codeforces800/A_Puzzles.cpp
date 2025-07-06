//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n ,m;
    cin>>n>>m;
    int ar[m];
    for(int i =0;i<m;i++){
        cin>>ar[i];
    }
    sort(ar, ar+m);
    int least = ar[m-1] - ar[0];
    // cout<<least<<endl;
    for(int i = 0;i<m-n+1;i++){

      //  cout<<ar[n-1+i] - ar[i]<<endl;
        if(ar[n-1+i] - ar[i]< least)
        least = ar[n-1+i] - ar[i];
    }
    cout<<least<<endl;
    return 0;
}