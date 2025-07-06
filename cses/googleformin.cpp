//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    set<string>st;
    vector<string>v;
    for(int i =0;i<n;i++){
        string s;
        cin>>s;

        v.push_back(s);
    }
    for(auto x: v){
        st.insert(x);
    }
    cout<<st.size()<<endl;
    return 0;
}