//author: Ghostyy :D

//EDGE DELETION QUES APPROCH:
/*
Given an undirected tree of N nodes labelled from ! to N .
Each node has a certain weght assigneed to it given by an integer  array A of size N.
You need to delete an edge in such a way thay Product between sum of weight of nodes in one
subtree with sum of weight of nodes in other subtree is maximized .
Return tis maximum possible product modulo 10^9 + 7

NOTE:
 the tree  is rooted  at node labelled with 1

*/

#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int subtree_sum[N];
int val[N];
const int M = 1e9+7;
void dfs(int vertex, int parent = -1)
{
    /**Take action on vertex after entering 
     * the vertex
    
    **/
  

    for(int child:g[vertex])
    {
        subtree_sum[vertex] += val[vertex];
        if(child == vertex) continue;
        /** Take action on child before
         * entering the child node
         * 
         * 
         */

        dfs(child, vertex);
        /**
         * Take action on child 
         * after exiting child node
         */
        subtree_sum[vertex]+= subtree_sum[child];
    }

    /**
     * Take action on vertex before
     * exiting the vertex.
     */

}
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n-1;i++)
    {
        int v1,v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    dfs(1); 

    long long  ans = 0;
    for(int i = 2;i<=n;i++){
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - part1;
        ans = max(ans , part1 * 1LL * part2)%M;
    }
    cout<<ans<<endl;
    return 0;
}