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
    string s;
    string str = "...";
    cin>>s;
    int f= 0;
    for(int i = 0;i<n-2;i++){
        string st = s.substr(i,3);
        if(st == str){
            f = 1;
            break;
        }
    }
    if(f)
    cout<<2<<endl;
    else{
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '.')
            cnt++;
        }
    cout<<cnt<<endl;
    }
}
    return 0;
}