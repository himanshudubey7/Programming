#include<bits/stdc++.h>

using namespace std;
const int N = 1e3+5;
int ar[N][N];
int main(){

    int t;
    cin>>t;
    while(t--){
        int n ,m , k;
        cin>>n>>m>>k;
        int x,y;
    cin>>x>>y;
    ar[x][y] = 1;
    int min = 10000;
    int time = 0;
    for(int i = 0;i<k;i++){
        int x1, y1;
        cin>>x1>>y1;
        int dist = abs(x-x1)+abs(y-y1);
        if(dist <min){
            min = dist;
        }
    }
    
    }


    return 0;
}