//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    map<int , int> mp;
    for(int i= 0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    if(n == 2 || n==1){
        cout<<"Yes"<<endl;
    continue;
    }
    if(mp.size() >2){
        cout<<"No"<<endl;
    }
    if(mp.size() == 1){
        cout<<"Yes"<<endl;
    }
    else if(mp.size() == 2){
        int f = 0;
        int s = 0;
        int l = 0;
        for(auto it: mp){
            if(f == 0){
                s = it.second;
            }
            else{
                l = it.second;
            }
            f++;
        }
        if(s+1 == l|| l+1 == s){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
    }
}
    return 0;
}