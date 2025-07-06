//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        long long n, m ,k;
        cin>>n>>m>>k;
        long long ar[n];
        long long arr[m];
        long long sum1 = 0;
        long long sum2 = 0;
        for(int i = 0;i<n;i++){
            cin>>ar[i];
            sum1+=ar[i];
        }
        sort(ar, ar+n);

        for(int i = 0;i<m;i++){
            cin>>arr[i];
            sum2 +=arr[i];

        }
        sort( arr ,arr+m ,greater<int>());
        while(k--){
            

        }

    }
    
    return 0;
}