// //author: Ghostyy :D
// #include<bits/stdc++.h>

// using namespace std;

// const int N = 1e5+10;
// vector<vector<int>> connect_comp;
// vector<int> curr_comp;
// vector<int> g[N];
// bool vis[N];
// int dfs(int vertex){
//     curr_comp.push_back(vertex);
//     vis[vertex] = true;
//     //   cout<<vertex<<" ";
// for(auto child : g[vertex]){
//     if(vis[child] == true){
//         continue;
//     }
//    //cout<<"calling the recursion"<<endl;
//     dfs(child);
// }
// // cout<<"exit the for loop"<<endl;
// // cout<<endl;

// }






// int main(){
//     int m , n;// no.. of vertices and edges
//     cin>>m>>n;
//     for(int i = 0;i<n;i++){
//         int u, v;
//         cin>>u>>v;
//         g[u].push_back(v);
//         g[v].push_back(u);
//     }
//     int ct= 0;
//     int cnt = 0;
//     for(int i = 1;i<m;i++){
//         if(vis[i] == true){
//             continue;
//         }
//         else{
//             curr_comp.clear();
//             cnt++;
//             dfs(i);
//             connect_comp.push_back(curr_comp);
//         }
//     }


//     cout<<"The connected the components =  "<<cnt<<endl;
//     cout<<"the connected components are :"<<endl;
//     for(auto c_cc: connect_comp){
//         cout<<"this is a connected component: "<<endl;
//         for(auto p : c_cc){
//             cout<<p<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }




/*
This code demonstrates if a graph has a cycle or not

*/
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool isLoop = false;
bool vis[N];



bool dfs(int vertex, int parent)
{
   vis[vertex] = true;
    for(auto child:g[vertex])
    {
        
        if(vis[child] && child == parent)
         continue;
        
        if(vis[child])
        return true;


        isLoop |=dfs(child, vertex);
    }

    return isLoop;

   
}
int main(){
   // cout<<"enter the number of vertices and edges"<<endl;
    int n,m;
    cin>>n>>m;

    //cout<<"enter the graph values"<<endl;
    for(int i =0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }


      for(int i = 1;i<m;i++){
        if(vis[i] == true){
            continue;
        }
      if(dfs(i,0)){
      isLoop = true;
      break;
      }

    }
    cout<<isLoop<<endl;
    return 0;
}

