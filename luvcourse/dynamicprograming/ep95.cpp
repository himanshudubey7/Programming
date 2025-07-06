//author: Ghostyy :D

/*
0-1 knapsack
W = 8
wt::    3 ,  4,   5
val::  30, 50, 60

knapsack  = O(N*W) complexity

*/
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
long long wt[105];
long long dp[105][100005];
long long val[105];
long long func(int i, int wt_left){
   
    // item at index i is not selected 
if(wt_left == 0)
return 0;
if(i<0)
return 0;
 if(dp[i][wt_left]!= -1)
    return dp[i][wt_left];
    long long ans = func(i-1, wt_left );
    if(wt_left-wt[i]>=0)
    ans = max(ans, func(i-1, wt_left-wt[i])+val[i]);
    return dp[i][wt_left] = ans;
}
int main(){
    memset(dp, -1 , sizeof(dp));
    int n, w;
    cin>>n>>w;
    for(int i = 0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
cout<<func(n-1, w)<<endl;
    
    
    return 0;
}