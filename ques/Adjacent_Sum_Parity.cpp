//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
int ar[n];
vector<int>v(100, 0);
for(int i = 0;i<n;i++){
    cin>>ar[i];
    v[ar[i]]++;
}

cout<<endl;
    return 0;
}