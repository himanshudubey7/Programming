//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<long long >v;
vector<vector<long long>> bin;
int main(){
    int n;
    cin>>n;
    
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    long long maxm= 0;

    for(int i = 0;i<n;i++){

        for(int j = i+1;j<n;j++){

            maxm = max(maxm,(v[i]|v[j]));
        }
    }
    cout<<maxm<<endl;

    return 0;
}