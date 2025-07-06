/*



Given Q queries 
* in each query given V , 
print subtree sum of V & number of even numberes
in subtree V

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
1
2


*/


#include<bits/stdc++.h> 

using namespace std;
const int N = 1e5+10;
vector<int> g[N];
int subtree_sum[N];
void dfs(int vertex,int parent = 0)
{
    /**Take action on vertex after entering 
     * the vertex
    
    **/
  
  
subtree_sum[parent] += vertex;
    for(int child:g[vertex])
    {
        
        if(child == parent )
         continue;
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
        subtree_sum[vertex] += subtree_sum[child]; 
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
   // dfs(1);
   int q;
   cin>>q;
   while(q--){
    int v;
    cin>>v;
    dfs(v);
    cout<<subtree_sum[v]<<endl;
   } 
    return 0;
}