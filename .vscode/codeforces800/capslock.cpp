//DONE!!!

#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    string str;
    str = s;
    int l = s.length();
    int flag = 1;
   transform(str.begin(),str.end(),str.begin(),::toupper);
   for(int i =1;i<l;i++)
   {
    if(s[i] != str[i])
    {
        flag =0;
    }
   }
   if(flag ==1)
   {
    for (int i=0; s[i]!='\0'; i++){
      if (s[i]>='A' && s[i]<='Z')
         s[i] = s[i] + 'a' - 'A';
      else if (s[i]>='a' && s[i]<='z')
         s[i] = s[i] + 'A' - 'a';
   }
   }
   cout<<s<<endl;
}