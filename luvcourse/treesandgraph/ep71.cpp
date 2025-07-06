/*
HACKER EARTH QUESTION :
Given n , i.e total number of nodes in an undirected graph numbered  
from 1 to n  and an integer e, i.e total number of edges in the graph.
calculate the total number of connected componentes in the graph .
A cnnected component is a set of vertices in a graph that are linkedto each 
other by paths.


INPUT FORMAT:
First line of input line contains two integer n and e
Next e lines contain two integers u and v meaning that node y and v are conncected 
to each other in undirected fashion.


OUTPUT FORMAT:
For each input graph print an inteer x denoting total number of connected components.



SAMPLE INPUT:
8 5
1 2 
2 3 
2 4 
3 5
6 7

*/


#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int vis[N];
vector<vector<int>> c_c;
vector<int> current_cc;
void dfs(int vertex){
    current_cc.push_back(vertex);
    vis[vertex] = true;

    for(int child : g[vertex]){
       // cout<<"parent : "<<vertex<<"  , child : "<<child<<endl;
        if(vis[child])
        continue;
        dfs(child);
    }
}



int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++){
            int x;
            cin>>x;
            if(x == 1){
      
        g[i].push_back(j);
        g[j].push_back(i);
            }
        }

    }
    int ct=0;
    for(int i =1;i<n;i++){
        if(vis[i]){
            continue;
        }
        else{
            current_cc.clear();
            

        ct++;
        dfs(i);
        // c_c.push_back(current_cc);
        }
    }
    
    cout<<ct<<endl;
    // for(auto c_cc: c_c){
    //     cout<<"this is a connected component: "<<endl;
    //     for(int vertex : c_cc){
    //         cout<<vertex<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
