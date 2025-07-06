//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<long long> v;
        long long n,x;
        cin>>n>>x;
        long long h = 0;
        for(int i =0;i<n;i++){
            cin>>x;
            v.push_back(x); 
        }
        int flag = 1;
        while(x>0){
        for(int i = 0;i<n;i++){
            if(v[i]<h){
                x--;
            }
        }
        h++;
            
        }
        cout<<h<<endl;
    }
    return 0;
}