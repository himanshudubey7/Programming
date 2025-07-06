//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int time = 0;
        if(x<y){
            if(x+k>=y){
                time = y;
            }
            else{
                time = x+ k + 2*(y- (x+k));
            }
        }
        else if(y<x){
            time += x;
        }
        cout<<time<<endl;


    }
    return 0;
}