//FAMOUS PROBLEM BALANCING PARAENTHESIS
/* 
((())) ---> BALANCED 
(()(()----> UNBALANCED 

*/

#include<bits/stdc++.h>

using namespace std;
unordered_map<char,int>symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s){
    stack<char> st;
    for(auto bracket:s)
    {
        if(symbols[bracket]<0)
        {
            st.push(bracket);
        }
        else
        {
            if(st.empty())
            return "NO";
            
                auto top = st.top();
                st.pop();
            
            if(symbols[top]+symbols[bracket]!=0)
            {
                return "NO";
            }
        }
    }
    if(st.empty())
    {
        return "yes";
    }
    else 
    return "NO";

}
int main(){
    string s;
    cin>>s;
    int l = s.length();
   isBalanced(s);
    
    
    return 0;
}