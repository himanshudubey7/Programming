//fibonacii seris using dp 

//--------------top- down approch----------------------
//author: Ghostyy :D

/*
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[N];
int func(int n){

    
    if(n == 1|| n== 0){
        return n;
    }
    if(dp[n]!= -1){
        return dp[n];
    }
    dp[n] = func(n-1)+func(n-2);
    return dp[n];

}
int main(){
    memset(dp, -1 , sizeof(dp));
    int n;
    cin>>n;
    int p = func(n);
    cout<<p<<endl;

    return 0;
}
*/


//--------------------bottom - up approch-----------------
// using tabulation method 
//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int dp[N];
int func(int n){
   dp[0] = 0;
   dp[1] = 1;
   for(int i = 2;i<=n;i++){
    dp[i] = dp[i-1] + dp[i-2];
   }
   return dp[n];

}

int main(){
    memset(dp , -1 , sizeof(dp));
    int n;
    cin>>n;
    cout<<func(n)<<endl;
    
    return 0;
}