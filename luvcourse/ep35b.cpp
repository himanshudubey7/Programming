#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
set<int> st;
map<int ,int> m;
for(int i=0;i<n;++i)
{
    int x;
    cin>>x;
    st.insert(x);
}
for(int i=0;i<n;i++)
{
    auto it = st.lower_bound(5);
}
    return 0;
}