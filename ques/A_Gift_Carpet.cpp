//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n , m;
    cin>>n>>m;
    char ar[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
           cin>>ar[i][j];
        }
    }
    string s= "vika";
    string str;
    int p = 0;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(ar[j][i] == s[p]){
                str = str+ar[j][i];
                p++;
                break;
            }
        }
    }
    if(str == s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}