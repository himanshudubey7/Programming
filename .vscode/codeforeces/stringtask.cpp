#include<bits/stdc++.h>

using namespace std;
int main(){
    //list <char> l1;
    string s;
    cin>>s;
    string str;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='u'&&s[i]!='i'&&s[i]!='y'&&s[i]!='A'&&s[i]!='E'
                                                    &&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y')
        {
            str = str+s[i];
        }
    }
    //cout<<str<<endl;
    l= str.length();
    string st;
    for (int i = 0; i < l; i++)
    {
        st = st+'.'+str[i];
    }
    //cout<<st;
    l = st.length();
    for(int i = 0 ; i<l ; i++)
    {
        if(st[i]!='.')
    transform(st.begin() , st.end() , st.begin(), :: tolower);
    }
    cout<<endl<<st;
    
    


    return 0;
}