//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
bool contd(const tuple<int,int, char>&a , const tuple<int , int , char>&b){
    if(get<0>(a)!= get<0>(b))
    return (get<0>(a)  <  get<0>(b));
    else
    return (get<1>(a)>get<1>(b));
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int n = s.size();

    vector<tuple<int,int, char>> vt;
    int pre =0;
    int op= 0;
    int cl = 0;
    // vt.push_back({0, 1});
    for(int i= 0;i<n;i++){
        vt.push_back({(op), i+1 , s[i]});
        if(s[i] == '(')
        op++;
        else if(s[i] == ')')
        --op;

// cout<<op<<endl;

    }
    sort(vt.begin(), vt.end(), contd);

    // for(auto it: vt){
    //     cout<<get<0>(it) <<" "<<get<1>(it)<<" "<<get<2>(it)<<endl;
    // }
    for(auto t: vt){
        cout<<get<2>(t);
    }
    

    return 0;
}