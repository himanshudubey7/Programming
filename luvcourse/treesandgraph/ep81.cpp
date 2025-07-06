//author: Ghostyy :D

//MULTI SOURCE BFS


#include<bits/stdc++.h>

using namespace std;
const int N = 1e3+10;
const int INF = 1e9+10;
int val[N][N];
int vis[N][N];
int lev[N][N];
int n, m;




vector<pair<int , int>> movements = {

    {0,1} , {0,-1} , {1,0}, {-1, 0} ,
    {1,1} , {1, -1 }, {-1,1}, {-1, -1}
};


bool isvalid(int i , int j ){
    return i>=0 && j>=0 && i<n && j<m;
}
int bfs(){
    int mx = 0;
    for(int i =0;i<n;i++){
        for(int j= 0;j<m;j++){
            mx = max(mx, val[i][j]);
        }
        
    }

    queue<pair<int, int>> q;
    for(int i =0;i<n;i++){
        for(int j= 0;j<m;j++){
            if(mx == val[i][j]){
                q.push({i,j});
                lev[i][j]= 0;
                vis[i][j] = 1;

            }
        }
    }
    int ans = 0;
    while(!q.empty()){
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
        q.pop();
        for(auto move : movements){
            int childx = v_x +move.first;
            int childy  = v_y+ move.second;
            if(!isvalid(childx , childy))
            continue;
            if(!vis[childx][childy]){
                q.push({childx,childy});
                vis[childx][childy] = 1;
                lev[childx][childy] = lev[v_x][v_y] + 1;

                ans = max(ans , lev[childx][childy]);

            }
        }

    }
}
void reset(){
    for(int i =0;i<n;i++){
        for(int j= 0;j<m;j++){
            vis[i][j] = 0;
            lev[i][j] = INF;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        reset();
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>val[i][j];
            }
        }
        cout<<bfs()<<endl;
        
    }
    
    
    return 0;
}