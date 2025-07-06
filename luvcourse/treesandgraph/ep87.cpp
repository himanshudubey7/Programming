//author: Ghostyy :D
//KRUSKAL'S ALGORITHM: to find the minimum spanning tree
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

int parent[N];
int size[N];

void make(int v){
    parent[v] = v;
    size[v] = 1;

}
int find(int v){
if(v == parent[v]){
    return v;
}
//path compression
return  parent[v] = find(parent[v]);
}
void Union(int a , int b){
    a = find(a);
    b = find(b);
    if(a != b){
        //union by size/rank
        if(size[a] < size[b])
        swap(a,b);
        parent[b] = a;
        size[a]+= size[b];
    }
}


int main(){
        int total_cost=0;
    int n , m;
    cin>>n>>m;
    vector<pair<int , pair<int , int>>> edges;
    for(int i = 0;i<m;i++){
        int wt, u, v;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    for(int i =1 ;i<=n;i++){
        make(i);
    }

    sort(edges.begin() , edges.end());
    for(auto &edge: edges){
        int weight = edge.first;
        int x = edge.second.first;
        int y = edge.second.second;
        if(find(x) == find(y))
        continue;
        Union(x,y);
        total_cost += weight;
        cout<< x<< " "<< y<<endl;
    }
    cout<<total_cost<<endl;
    
    return 0;
}