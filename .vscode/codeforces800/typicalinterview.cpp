#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        
        string st =  "FBFFBFFBFBFFBFFBF";
        string s; 
        cin>>s;
        int found = st.find(s);
       if (found != string::npos)
        cout << "YES"<< endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
//DONE !!!