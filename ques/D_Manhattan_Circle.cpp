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
    int n, m;
    cin>>n>>m;
    vector<ll> xcord;
    vector<ll> ycord;
    char arr[n][m];

    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == '#'){
                xcord.push_back(i+1);
                ycord.push_back(j+1);
            }
        }
    }
    sort(xcord.begin(), xcord.end());
    sort(ycord.begin(), ycord.end());
    ll med_x= xcord[xcord.size()/2];
    ll med_y= ycord[ycord.size()/2];
    cout<<med_x <<" "<<med_y<<endl;
}
    return 0;
}