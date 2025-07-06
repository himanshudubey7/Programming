//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
set<int> st;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
    return 0;
}