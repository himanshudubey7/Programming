//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[1000];
int func(int len , vector<int> &prices){
    if(len == 0){
        return 0;
    }
    if(dp[len] != -1)
    return dp[len];
    int ans = 0;
    for(int len_to_cut = 1; len_to_cut<=prices.size();len_to_cut++){
        if(len-len_to_cut>=0){
        ans =  max(ans,func(len-len_to_cut , prices)+ prices[len_to_cut-1]);
        }


    }
    return dp[len] = ans;
}

// time complexity = O(N^2)
int cutrod(int price[], int n){
    vector<int> prices(price , price+n);
}
int main(){
    memset(dp, -1 , sizeof(dp));
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);


    
    return 0;
}