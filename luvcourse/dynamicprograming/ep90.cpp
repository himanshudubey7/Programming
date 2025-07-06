#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[N];

//top - down approch --> means to solve a bigger problem by breaking it into small parts 
// and solving the smaller ones 
int fib(int n){
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;
    if(dp[n] != -1)//memosisation in dynamic programming
    //now the function calls will be reduced to n calls 
    return dp[n];

    return dp[n] = fib(n-1)+fib(n-2);
}
int main(){
    memset(dp, -1, sizeof(dp));//memset function is used for only some typical values 
                                  // to fill in whole array
    int n;
    cin>>n;
cout<<fib(n);
    
    return 0;
}



/*
Bottom - up 

*/