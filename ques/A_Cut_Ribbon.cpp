//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans = INT_MIN;
    for(int i = 0;i<=4000;i++){
        for(int j = 0;j<=4000;j++){
            int zc = n-(i*a + j* b);
            if(zc <0)
            break;
            double z = zc/(double)c;
            if(z == (int)z){
                ans = max((i+j+ (int)z), ans);
            }
        }
    }
    cout<<ans<<endl;
   
    
   
    return 0;
}