#include <bits/stdc++.h>
using namespace std;
stack<char>st;

int main() {
string s;
cin>>s;
string ans;
int n = s.size();
for(int i = 0;i<n;i++){
	if(s[i] !='['){
		st.push(s[i]);
		}
		else if(s[i]== '['){
			while(st.top() =='['){
				char ch = st.top();

				ans+= ch;
                st.pop();
			}
		}
		
}
while(st.empty()){
	ans += st.top();
    st.pop();
}		
cout<<ans<<endl;
}