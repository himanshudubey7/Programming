//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int g[N][N];
int main(){
    cout<<"enter the no. of vertex and edges"<<endl;
    int n, m;
    cin>>n>>m;

    for(int i = 0 ;i<m;i++){
        int v1, v2;
        cin>>v1>>v2;
        g[v1][v2] = 1;
        g[v2][v1] = 1;
    }
    


    return 0;
}