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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string pie = "pie";
        string map = "map";
        string app = "mapie";
        int cnt2= 0;
        int cnt = 0;
        for(int i = 0;i<n;i++){
                if(s.substr(i,5) == app){
                cnt2++;
                i = i+4;
                
            }
            else if(s.substr(i,3) == pie|| s.substr(i,3) == map){
                cnt++;
                i=i+2;
            }
         
        }
         
        cout<<cnt+cnt2<<endl;

    }
    return 0;
}