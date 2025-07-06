// pERMUTAION WITH SPACES
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
    op2.push_back(' ');
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip, op1, ans);
    solve(ip,op2 , ans);

}


int main(){
    cout<<"enter input string"<<endl;
    string s;
    cin>>s;
    string op = "";
    op.push_back(s[0]);
    s.erase(s.begin()+0);
cout<<"the space change permutation are : "<<endl;
vector<string> ans;
    solve(s, op , ans);
    set<string> sol ;
    for(auto it: ans){
       cout<<it<<endl; 
    }
    cout<<endl;
    return 0;
}