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
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        //sort(ar, ar+n);
        
        int cnt = 0;

        for(int i = 0, j=i+1;i<n, j<n-1;i++, j++){
            if(ar[i] == ar[j]){
                cnt++;
            }
            
        }

    }
    return 0;
}