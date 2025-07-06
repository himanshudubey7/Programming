#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max = -1;
        int ar[3];
        for(int i =0;i<n;i++){
            int x, y;
            cin>>x>>y;
            if(x<=10 ){
if(max<y){
    max = y;
    ar[0] = i;
    ar[1] = x;
    ar[2] = max;
}
            }

        }
        cout<<ar[0]+1<<endl;
            }
    return 0;
}