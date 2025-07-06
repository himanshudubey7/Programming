//DONE!!!!

#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    int l = s.size();
    char ch = '.';
    char chr = '-';
    string str;

    for(int i=0;i<l;i++)
    {
       
         if(s[i] == chr && s[i+1] == ch)
        {
            str = str+'1';
            i++;
        }
        else if(s[i]== chr&& s[i+1] == chr)
        {
            str = str+'2';
            i++;
        }
        else  if(s[i]== ch )
        {
            str = str+'0';
        }
    }
    cout<<str<<endl;

    
        return 0;
}