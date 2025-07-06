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
        int n, m, k;
        cin>>n>>m>>k;
        int half = k/2;
        set<int> s1;
        set<int>ans;
        int flag1 =0;
        int flag2= 0;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            if(x>=1 && x<=k){
                s1.insert(x);
            }
        }
        if(s1.size() < half){
            flag1 = 1;
        }
for(auto it: s1){
    ans.insert(it);
}
        set<int>s2;

  for(int i = 0;i<m;i++){
            int x;
            cin>>x;
            if(x>=1 && x<=k){
                s2.insert(x);
            }
        }
        if(s2.size() < half){
            flag2 = 1;
        }
for(auto ip: s2){
    ans.insert(ip);
}

// for(auto y: s1){
//     cout<<y<<endl;
// }
       if(flag1 ==1 || flag2 == 1){
        cout<<"NO"<<endl;
       } 
       else if(ans.size() <k){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    
    }
    return 0;
}