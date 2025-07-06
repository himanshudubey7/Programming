//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    long long ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
    }
    long long mx = 0;
    long long cnt = 0;
    for(int i = 0;i<n-1;i++){
        if(ar[i]<=ar[i+1])
        cnt++;
        else
        cnt=0;
        mx = max(mx, cnt);
    }
    cout<<mx+1<<endl;

    return 0;
}