#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool vis[N];


bool isLoopExist = false;


bool dfs(int vertex, int parent){
    vis[vertex] = true;
    for(auto child: g[vertex])
    {

        if(vis[child] && child == parent)
        continue;

        if(vis[child])
        return true;

        isLoopExist |= dfs(child, vertex);
    }
    return isLoopExist;
}
int main(){
    int n,e ;
    cin>>n>>e;
    for(int i =0;i<e;i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i =0;i<=n;i++){
        if(vis[i])
        continue;

        if(dfs(i,0)){
        isLoopExist = true;
        break;
        }
    }
    cout<<isLoopExist<<endl;
    return 0;
}