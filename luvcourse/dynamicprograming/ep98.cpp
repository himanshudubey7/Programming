//sub set sum problem


//author: Ghostyy :D
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> value(N);
int dp[205][20005];
bool func(int i , int sum , vector<int> &nums){
    if(sum == 0)
    return true;
    if(i<0) return false;

    if(dp[i][sum]!= -1)
    return dp[i][sum];

    //not consider ith index
    int isPossible = func(i-1, sum, nums);
    // consider ith index
    if(sum- nums[i]>=0)
    isPossible = isPossible|func(i-1 , sum-nums[i], nums);

    return dp[i][sum] = isPossible;


}
bool canPartition(vector<int> &nums){
    int sum = accumulate(nums.begin() , nums.end(), 0);
    if(sum%2!= 0)
    return false;
    sum = sum/2;
    return func(nums.size() -1, sum , nums);
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

    
    return 0;
}