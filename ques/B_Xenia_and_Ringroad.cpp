//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int ar[N];
int main(){
    int n,m;
    cin>>n>>m;
    int curr = 1;
    long long time = 0;
    for(int i = 0;i<m;i++){
        int x;
        cin>>x;
        if(x>=curr)
        {
            time += x - curr;
            curr = x;

        }
        else{
            time += n-curr+x;
            curr = x;

        }
        
    }
cout<<time<<endl;
    return 0;
}