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
        int ar[n];

        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar, ar+n);
        long long sum = 0;
        for(int i = 1;i<n;i++){
            sum = sum+ (ar[i]-ar[i-1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}