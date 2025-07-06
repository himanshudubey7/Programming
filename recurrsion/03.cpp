// print unique subsets
#include<bits/stdc++.h>
using namespace std;
void solve(string ip, string op , vector<string>&ans){
    if(ip.size() ==0){
        ans.push_back(op);
        return ;
    }
    string op1 = op;
    string op2  = op;
    op1.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip, op1, ans);
    solve(ip,op2 , ans);

}


int main(){
    cout<<"enter input string"<<endl;
    string s;
    cin>>s;
    string op = "";
cout<<"the unique subsets are: "<<endl;
vector<string> ans;
    solve(s, op , ans);
    set<string> sol ;
    for(auto it: ans){
        sol.insert(it);
    }
    for(auto it : sol){
        cout<<it<<" ";
    }
    cout<<endl;


    return 0;
}