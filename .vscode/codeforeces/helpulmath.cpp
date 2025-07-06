#include<iostream>

using namespace std;
int main(){
    string s,st;
    string str;
    cin>>s;
    int l = s.length();
    char ch;
    for(int i = 0; i<l ; i++)
    {
        ch = s.at(i);
        if(ch == '1')
        {
            str = str+ch+"+";

        }
    }
   // cout<<"new string is "<<endl;
   // cout<<str<<endl;
 
    for (int i = 0; i < l; i++)
    {
        ch = s.at(i);
        if(ch =='2')
        {
            str =str+ch+"+";
        }   
    }
   // cout<<" the string after second loop "<<endl;
   // cout<<str<<endl;
    for (int  i = 0; i < l; i++)
    {
        ch = s.at(i);
       if(ch=='3')
        {
           str =str+ch+"+";
        }
    }
    for(int i = 0 ; i<(l);i++)
    {
        char chr = str.at(i);
        st = st+chr;
    }
    cout<<st<<endl;

    
    return 0;
}