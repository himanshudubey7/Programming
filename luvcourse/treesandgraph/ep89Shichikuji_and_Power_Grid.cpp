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
        long long total_cost=0;
    int n ;
    cin>>n;
    vector<pair<int ,int>> cities(n+1);
    for(int i = 1;i<=n;i++){
        int x, y;
        cin>>x>>y;
        cities.push_back({x,y});
    }

vector<int> c(n+1);//cost of building powerstation 
vector<int> k(n+1); 
for(int i = 1;i<=n;i++){
    cin>>c[i];
}

for(int i = 1;i<=n;i++){
    cin>>k[i];
}

vector<int> powerstation;
vector<pair<int ,int>> connections;

    vector<pair<long long , pair<int , int>>> edges;

    for(int i = 1;i<=n;i++){
        edges.push_back({c[i],{0,i}});
    }
  
  for(int i = 1;i<=n;i++){
    for(int j = i+1;j<=n;j++){
        int dist = abs(cities[i].first - cities[j].first)+abs(cities[i].second - cities[j].second);
        long long cost = dist*1LL* (k[i]+k[j]);
        edges.push_back({cost,{i,j}});
    }
  }
    
    
    
    
    sort(edges.begin() , edges.end());

    
    for(int i =1 ;i<=n;i++){
        make(i);
    }

    for(auto &edge: edges){
        int weight = edge.first;
        int x = edge.second.first;
        int y = edge.second.second;
        if(find(x) == find(y))
        continue;
        Union(x,y);
        total_cost += weight;
        if(x == 0 || y == 0){
            powerstation.push_back(max(x,y));
        }
        else
        {
            connections.push_back({x,y});
        }
    }
    cout<<total_cost<<endl;

    cout<<powerstation.size()<<endl;
    for(int station : powerstation){
        cout<<station<<" ";
    }
    cout<<endl;
    cout<<connections.size()<<endl;
    for(auto &connect : connections){
        cout<<connect.first<<" "<<connect.second;
    }
    
    
    return 0;
}