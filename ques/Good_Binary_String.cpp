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
        string s ;
        cin>>s;
        int f = 0;
        int fl = 0;
        vector<int> v;
        for(int i = 1;i<n;i+=2){
            if(s[i] != s[i-1]){
            if(s[i] == '0' && f== 0 ){
                f = 1;
                v.push_back(i+1);
            }
            else if(s[i-1] == '0' && f == 0){
                 f = 1;
                v.push_back(i);
            }
            
            else if(s[i] == '1' && f == 1 ){
                f = 0;
                v.push_back(i+1);
            }
            else if( s[i-1] == '1' && f==1){
                f = 0;
                v.push_back(i);
            }
            }
        }
        cout<<v.size()<<endl;
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}