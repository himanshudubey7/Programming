//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
set<char> st;
map<char ,int> mp;
int t;
cin>>t;
while(t--){

mp.clear();
st.clear();
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i= 0;i<n;i++){
        mp[s[i]]++;
        st.insert(s[i]);
    }

   // cout<<"size = "<<st.size()<<endl;
    // for(auto it: mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    int cnt = st.size();
    for(int i = n-1;i>=0;i--){
        mp[s[i]]--;
        if(mp[s[i]] == 0){
            st.erase(s[i]);
        }
      //  cout<<"the size of set = "<<st.size()<<endl;
       cnt = cnt + st.size();
   // cout<<cnt<<"\n";
    }
    cout<<cnt<<"\n";
}
    
    return 0;
}