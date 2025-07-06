//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int hsh[N];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i= 0;i<n;i++){
            cin>>ar[i];
            hsh[ar[i]]++;
        }
        int max_diff = INT_MIN;
        int maxm = 0;
        int diff = 0;
        for(int i = 0;i<N;i++){
            maxm = max(maxm , hsh[i]); 
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(ar[i] == ar[j]){
                    diff = j-i;
                }
            }
            max_diff = max(max_diff, abs(diff));
        }


    }
    
    return 0;
}