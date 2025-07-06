//author: Ghostyy :D

//shorstest path using :
/*
1. Normal bfs
2. 0 and 1 bfs
3. multi-source bfs 
4. Dijkstra Algorithm

*/

// 1. SHORTEST PATH USING NORMAL BFS
// #include<bits/stdc++.h>

// using namespace std;
// const int N = 1e5+10;
// const int INF = 1e9+10;
// vector<int> g[N];
// bool vis[N];
// vector<int> lev(N, INF);

// void bfs(int src){
//     queue<int> q;
//     q.push(src);
//     vis[src] = 1;
//     lev[src] = 0;
//     while(!q.empty()){
//         int v = q.front();
//         q.pop();

//         for(auto child : g[v]){
//             if(vis[child]) continue;
//             q.push(child);
//             vis[child] = 1;
//             if(lev[child]>lev[v]+1){
//             lev[child] = lev[v] + 1;
//             cout<<"level of "<<child<<" = "<<lev[child]<<endl;
//             }
//         }
//     }
// }



// int main(){
// int n, m;
// cin>>n>>m;
// for(int i = 0;i<m;i++){
//     int x, y;
//     cin>>x>>y;
//     g[x].push_back(y);
//     g[y].push_back(x);
// }
// bfs(1);
    
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------
// 2. SHORTEST PATH USING  THE CONCEPT OF 0 AND 1 BFS

// //author: Ghostyy :D
// #include<bits/stdc++.h>

// using namespace std;
// const int N = 1e5+10;
// const int INF = 1e9+10;

// vector<pair<int , int> > g[N];

// vector <int> lev(N, INF);



// void bfs(int src , int dest){
//     lev[src] = 0;
//     deque<int> q;
//     q.push_back(src);
//     while(!q.empty()){
//         auto v = q.front();
//         q.pop_front();
//         for(auto child : g[v]){
//             int child_v = child.first;
//             int child_wt = child.second;
           

//             if(lev[v]+ child_wt < lev[child_v])
//             {
//                 lev[child_v] = lev[v] + child_wt;

//                  if(child_wt == 1){
//                 q.push_back(child_v);
//             }
//             else{
//                 q.push_front(child_v);
//             }
                
//             }
//         }

//     }
//     cout<<"the level of the destination node  : = "<<lev[dest]<<endl;
    

// }

// int main(){
//     int n, m ;
//     cin>> n>> m;
//     for(int i = 0;i<m ;i++){
//         int x , y , wt;
//         cin>> x>>y>>wt;
//         g[x].push_back({y,wt});
//         g[y].push_back({x,wt});

//     }

//     cout<<"enter the source and the destination "<<endl;
//     int src , dest;
//     cin>>src >> dest;
//     bfs(src ,dest);

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------

//MULTI-SOURCE BFS 

//author: Ghostyy :D
// #include<bits/stdc++.h>

// using namespace std;
// const int INF  = 1e9+10;
// const int N = 1e5+10;
// vector<int > g[N];
// vector<int> lev(N,INF);
// vector<int> sources[1];

// void bfs(vector<int> src){
//     queue<int> q;
//     for(int i = 0;i<src.size();i++){
//         q.push(src[i]);

//     }
//     while(!q.empty()){

//     }



// }




// int main(){
//     int n, m;
//     cin>>n>>m;

//     for(int i= 0;i< m;i++){
//         int x ,y;
//         cin>> x>> y;
//         g[x].push_back(y);
//         g[y].push_back(x);

//     }
//     cout<<"enter the number of sources "<<endl;
//     int src;
//     cin>>src;
// for(int i = 0;i<src;i++){
//     int p;
//     cin>>p;
//     sources[i].push_back(p);
// }
// bfs(sources[n]);

    
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------


//DIJKSTRA ALGORITHM


//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int INF = 1e9+10;
const int N = 1e5+10;
vector< pair< int , int> > g[N];
vector<int > dist(N, INF);
int vis[N];

void dijstra(int src){
    dist[src] = 0;
    
multiset<pair<int,int>> st;
st.insert({0, src});
vis[src] = 1;
while(!st.size()>0){
auto node = (*st.begin());// pair
st.erase(st.begin());
int v = node.second;
int v_wt = node.first;

for(auto child: g[v]){
    // child is a pair of node and weight
    int child_node = child.first;
    int child_wt = child.second;

    if(vis[child_node] == 1)
    continue;
    vis[child_node] = 1;
    if(dist[v]+ child_wt < dist[child_node]){
        dist[child_node]= dist[v]+ child_wt;

    }


}

}
}

int main(){
    int n, m ;
    cin>> n>>m;
    for(int i = 0;i< m;i++){
        int x , y, w;
        cin>>x>>y>>w;
        g[x].push_back({y,w});

    }


    
    return 0;
}