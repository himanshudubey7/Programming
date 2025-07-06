//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[N];
int func(int n){
    int cost = 0;
    
    if(n<=2){
        return n;
    }
   
    dp[n] = func(n-1)+ func(n-2);
    return dp[n];
}
int main(){
    memset(dp , -1 , sizeof(dp));
    int n;
    cin>>n;
   cout<< func(n);

    return 0;
}