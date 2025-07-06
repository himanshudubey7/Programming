//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int a, b;
    cin>>a>>b;
    int mini = min(a, b);
    int t= mini;
    int maxi = max(a,b);
     a = maxi - t;
     cout<<mini<<" "<<(a/2)<<endl;



    return 0;
}