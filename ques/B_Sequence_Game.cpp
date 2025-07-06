//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
long long b[N];
int main(){
    int t;
    cin>>t;
    while(t--){
        
vector<long long> a;
        int n;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>b[i];
        }
        a.push_back(b[0]);
        for(int i = 1;i<n;i++){
             if(a[a.size()-1]<=b[i]){
                a.push_back(b[i]);
            }
            else if(b[i] == 1){
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
            else{
                a.push_back(b[i]-1);
                a.push_back(b[i]);
            }
            }
        
        cout<<a.size()<<endl;
        for(auto it: a){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}

