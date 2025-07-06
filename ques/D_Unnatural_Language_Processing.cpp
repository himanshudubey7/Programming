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
        vector<string> v;
        for(int i = n-1;i>=0;i--){
            if(s[i] == 'b' || s[i] == 'c' || s[i] == 'd'){
                v.push_back(s.substr(i-2,3));
                i = i-2;
            }
            else{
                v.push_back(s.substr(i-1,2));
                i = i-1;

            }
        }
        for(int i = v.size()-1;i>=0;i--){
            if(i != 0)
            cout<<v[i]<<".";
            else
            cout<<v[i];
        }
        cout<<endl;

    }
    return 0;
}