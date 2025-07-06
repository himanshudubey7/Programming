#include<iostream>

using namespace std;
int main(){
    int t; 
    string s;
    cin>>s;
    int l = s.length();
    string str;
    for(int i = 0 ; i<l ; i++)
    {
        if(s[i]=='h')
        {
            str = str+s[i];
             t = i;
            break;
        }
    }
     for(int i = t+1 ; i<l ; i++)
    {
        if(s[i]=='e')
        {
            str = str+s[i];
             t = i;
            break;
        }
    }
     for(int i = t+1 ; i<l ; i++)
    {
        if(s[i]=='l')
        {
            str = str+s[i];
             t = i;
            break;
        }
    }
      for(int i = t+1 ; i<l ; i++)
    {
        if(s[i]=='l')
        {
            str = str+s[i];
             t = i;
            break;
        }
    }
      for(int i = t+1 ; i<l ; i++)
    {
        if(s[i]=='o')
        {
            str = str+s[i];
             t = i;
            break;
        }
    }

    if(str == "hello")
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}