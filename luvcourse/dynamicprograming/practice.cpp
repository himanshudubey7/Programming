//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int ar[N];
int cost[N];
int cost_calc(int i){
    if(i == 0)
    return 0;
int cost = INT_MAX;
// way -1 ;
cost = min(cost, cost_calc(i-1) + abs(ar[i] - ar[i-1]));

//way- 2;
if(i>1)
cost = min(cost, cost_calc(i-2) + abs(ar[i] - ar[i-2]));


return cost;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>ar[i];

    }

    cout<<cost_calc(n-1);
    return 0;
}