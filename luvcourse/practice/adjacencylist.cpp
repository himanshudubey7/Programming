//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<pair<int,int>> g[N];
int main(){
    int n , m;
    cin>>n>>m;
    for(int i = 0;i<m;i++){
        int v1 , v2,wt;
        cin>>v1>>v2>>wt;
        g[v1].push_back({v2,wt});
        g[v2].push_back({v1,wt});
    }
    
    return 0;
}