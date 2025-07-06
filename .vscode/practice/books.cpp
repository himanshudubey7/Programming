//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> v1;
        vector<int> v2;
        for(int i= 0;i<n;i++){
            int wt;
            cin>>wt;
            if(wt%2 == 0){
                v1.push_back(wt);
        }
        else{
            v2.push_back(wt);
        }
        
    }
    sort(v1.begin() , v1.end());
    sort(v2.begin(), v2.end());
    int total =0;
    int cnt = 0;
   for(auto it: v1){
    cnt = cnt+ it;
    if(cnt>=x){
        total++;
        cnt = 0;
    }
    
   }

    }
    return 0;
}