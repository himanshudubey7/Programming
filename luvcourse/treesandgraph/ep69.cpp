#include<bits/stdc++.h>

using namespace std;
const int N = 1e3+10;
int graph1[N][N];

    vector<int> graph2[N];
int main(){
    int n,m;
    cin>>n>>m;
    int graph1[n+1][n+1];
    for(int i =0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;
    } 



    return 0;
}