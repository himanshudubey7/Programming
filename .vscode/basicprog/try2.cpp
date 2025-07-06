#include<bits/stdc++.h>

using namespace std;
map<char, int> m = {{'(', -1} , {')' , 1}};
int isbalanced(string s){
    int ans =0;
   // cout<<"entered the function "<<endl;
     stack<char> st;
    for(auto it : s){
        if(m[it] <0){
            //push
            st.push(it);
           // cout<<"element that is pushed "<<it<<endl;
        }
        else
        {
            if(st.empty())
            {
                return ans;
            }

            auto ch = st.top();
            st.pop();
            if(m[ch] + m[it] != 0 ){
                //cout<<"elements that are compared are "<<ch<<" and "<<it<<endl;
                return ans;
            }
        }

    }
    if(st.empty()){
        ans = 1;
        return ans;
    }
    else
    return ans;

}
int main(){
    string s;
    cout<<"enter your string "<<endl;
    cin>>s;
   int ans = isbalanced(s);
   if(ans == 0){
    cout<<"NO"<<endl;
   }
   else
   {
    cout<<"YES"<<endl;
   }

    return 0;
}