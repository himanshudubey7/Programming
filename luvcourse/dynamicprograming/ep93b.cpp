//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[N];

int func(int amount , vector<int> & coins){
    
    if(amount == 0){
        return 1;
       
    }
    if(dp[amount] != -1)
    return dp[amount];
    int ans = INT_MAX;
    int cnt = 0;
    for(int coin: coins){
        if(amount-coin>=0)
       cnt += func(amount -coin, coins);

    }
return dp[amount] = ans;
}
int coinChange(vector<int>  &coins ,int amount){
    memset(dp, -1, sizeof(dp));
int ans= func(amount , coins);
return ans == INT_MAX ? -1 : ans;
}
int main(){
    vector<int> coins= {2};
    int amount;
    cin>>amount;
   if(coinChange(coins, amount) == -1){
    cout<<0<<endl;
   }
   else{

   }

    
    return 0;
}