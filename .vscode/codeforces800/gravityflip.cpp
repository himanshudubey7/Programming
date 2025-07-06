//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0;i<n;i++){
       cin>>ar[i];
    }
    sort(ar, ar+n);
    for(int i = 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}