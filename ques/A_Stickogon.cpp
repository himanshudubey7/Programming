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
        vector<int> v(200, 0);
        int n;
        cin>>n;
        for(int i= 0;i<n;i++){
            int x;
            cin>>x;
            v[x]++;
        }
        long long cnt = 0;
        for(int i =0;i<200;i++){
            if(v[i]>=3){
                cnt+= v[i]/3;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}