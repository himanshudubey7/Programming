#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;  //aaabcc
        cin>>s;
        char ch;
        char chr;
        int p =0;
        string str;
        string st =s;
        int count = 0;

        for(int i=0;i<n;i++)
        {
            ch = s[i];//a
            chr = s[i+1];//a
       str = s.substr(i+2, n-(i+2));
       cout<<"value of str before adding "<<str<<endl;
       if(i>0)
       {
        str = chr+str;
        str = ch+str;
       }
       
       cout<<"value of str "<<str<<endl;
       if(str != st)
       {
        count++;
        st=str;
        cout<<"value of st "<<st<<endl;
       }
    
            
        }
        cout<<count<<endl;
    }
    return 0;
}