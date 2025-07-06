//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        int ar[n];
        int maxm = INT_MIN;
        for(int i= 0;i<n;i++){
            cin>>ar[i];
            maxm = max(maxm, ar[i]);
        }
        sort(ar, ar+n);
        int total = 0;
        vector<int>
    }
    
    return 0;
}