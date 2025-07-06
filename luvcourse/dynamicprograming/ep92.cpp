//author: Ghostyy :D
/*
LONGEST INCRESING SUBSEQUENCE:
a subsequence is a sub set not in continous manner but the order of elements must be maintained
*/

//author: Ghostyy :D
//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[N];
vector<int> v(N);

int longest(int i){
    int ans = 1;
    for(int j = 0;j<i;j++){
        if(v[i]>v[j]){
            ans = max(ans, longest(j)+1);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = max(ans , longest(i));
     //   cout<<" the call for = "<<v[i]<<" = "<<ans<<endl;
    }
    cout<<ans<<endl;
    
    return 0;
}