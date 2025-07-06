//author: Ghosty::)
#include<bits/stdc++.h>
using namespace std;
vector<int> pairs[1001];
int main(){

     for(int i = 1; i <= 1000; ++i) {
        for(int j = 1; j <= 1000; ++j) {
            if(__gcd(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;
        vector<int> ar[1001];
        for(int i= 1;i<=n;i++){
            int x;
            cin>>x;
            // cin>>ar[i];
            ar[x].push_back(i);
        }
        int ans = -1;
        for(int i= 1;i<=1000;i++){
            for(auto j : pairs[i]){
                if(!ar[i].empty() && !ar[j].empty()){
                    ans = max(ans , ar[i].back() + ar[j].back());
                }
            }
        }
        cout<<ans<<endl;

    }
    
}