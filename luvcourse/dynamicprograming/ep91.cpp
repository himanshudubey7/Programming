/*
There are N stones, numbered 1,2,…,N. For each i (1≤i≤N),
 the height of Stone i is h(i) 

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of ∣ hi−hj ∣ is incurred, where j is the stone to land on.
Find the minimum possible total cost incurred before the frog reaches Stone N.

*/



//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int h[N];


int func(int i){
if( i == 0)
return 0;

    int cost = INT_MAX;
    //cout<<cost<<endl;
    //way-1
   cost = min (cost, func(i-1) + abs(h[i] - h[i-1]));
   // way - 2
   if(i>1)
   cost = min(cost, func(i-2) + abs(h[i] - h[i-2]));


   return cost;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>h[i];
    }
    cout<<func(n-1)<<endl;
    
    return 0;
}