//author: Ghostyy :D

/*

HOW TO FIND LCA : (LOWEST COMMON ANCESTOR OF TWO NODES) in O(N) 


INPUT:

13
1 2
1 3
1 13
2 5
5 6
5 7
5 8
8 12
3 4
4 9
4 10
10 11

*/



#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int parent[N];
void dfs(int v , int par = -1){
    parent[v] = par;
    for(int child : g[v]){
        if(child == par) continue;
        dfs(child, v);
    }
}
vector<int> path(int v){
    vector<int> ans ;
    while(v != -1){
        ans.push_back(v);
        v = parent[v];
    }
    reverse(ans.begin() , ans.end());
    return ans;
}


int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n-1;i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);// storing parent

    int a, b;
    cout<<"enter your nodes for which you want to find lca"<<endl;
    cin>>a >>b;
    vector<int> path_a = path(a);
    vector<int> path_b = path(b);

    
    cout<<"path for node "<<a<<" is = "<<endl;
    for(int value : path_a){
        cout<<value<<" ";
    }
    cout<<endl;
    cout<<"path of node "<<b<<" is = "<<endl;
    for(auto val : path_b){
        cout<<val<<" ";
    }
    cout<<endl;
    int min_len = min(path_a.size(), path_b.size());
    int lca = -1;
    for(int i  = 0;i<min_len; i++){
        if(path_a[i] == path_b[i]){
            lca = path_a[i];
        }
        else
        break;
    }
    cout<<"the lowest common ancestor is = "<<endl;
    cout<<lca<<endl;

    return 0;
}