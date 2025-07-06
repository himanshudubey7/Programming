/*
Leetcode ques : flood fill-1 
applying dfs on matrix form 

*/
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<int> g[N];

 
void dfs( int i, int j , int initialcolor , int newcolor ,vector<vector<int>>& image)
{
    int n = image.size();
    int m = image[0].size();
    if(i<0 || j<0) return ;
    if(i>=n || j>= m) return ;
    if(image[i][j] != initialcolor) return ;

    image[i][j] = newcolor;

 dfs(i-1, j,initialcolor , newcolor, image);
 dfs(i+1, j,initialcolor , newcolor, image);
 dfs(i,j-1,initialcolor , newcolor, image);
 dfs(i,j+1,initialcolor , newcolor, image);

 
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int initialcolor = image[sr][sc];
    if(initialcolor!= color)
    dfs(sr, sc , initialcolor , color, image);
return image;
 }

int main(){
    int n,m;
    cin>>n>>m;
    for(int i =0;i<m;i++)
    {
        int v1,v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    
    return 0;
}