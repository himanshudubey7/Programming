//author: Ghostyy :D

/*

FLOYD WARSHAL ALGORITHM :

*this algorithm handle -ve weights(we will have to check the condition:

if(dist[i][k] != INF && dist[k][j] != INF))


*this algo does not handle -ve weighted cycle::
If there is such a negative cycle, you can just traverse this cycle over and 
over, in each iteration making the cost of the path smaller. So you can make 
certain paths arbitrarily small, or in other words that shortest path 
is undefined. That automatically means that an undirected graph cannot 
have any negative weight edges, as such an edge forms already a negative
 cycle as you can move back and forth along that edge as long as you like.



*/
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
const int INF = 1e9+10;
int dist[N][N];

int main(){
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    int  n , m;
    cin>>n>>m;
    for(int i = 0;i<m;i++){
        int x ,y, wt;
        cin>>x>>y>>wt;
        dist[x][y] = wt;

    }

    for(int k = 1;k<=n;++k){
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                dist[i][j] = min(dist[i][j] , dist[i][k] + dist[k][j]);
            }
        }

    }

    for(int i =1;i<=n ;i++){
        for(int j = 1;j<=n;j++){
            if(dist[i][j] == INF){
                cout<<"I"<<" ";
            }
            else{
            cout<<dist[i][j] << " ";
            }
        }
        cout<<endl;
    }
//time complexity: O(N^3)

    return 0;
}