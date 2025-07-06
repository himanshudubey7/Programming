//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[N];
int func(int amount , vector<int> &coins){
if(amount == 0){
    return 0;
}
int cnt = 0;
for(int coin : coins){
    cnt+=  amount - coin;
} 
}
int main(){
    int n;
    cin>>n;
   vector<int> coins(n);
    for(int i= 0;i<n;i++){
        cin>>coins[i];
    }

    return 0;
}