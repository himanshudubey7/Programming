#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;

    while(t!=0)
    {
        int count =0;
        int n;
        cin>>n;
        string s ="BAN";
        string str;
        for (int i = 0; i < n; i++)
        {
            str = str+s;
        }
        //cout<<str;
        int l = str.length();
        char ch ;
        int first;
        int second;
        for (int i = 0; i <l ; i++)
        {
            first= 0;
            second =0;
            if(str[i]=='A')
            {
                first =i;
                second =i+1;
                
                count++;
                ch = str[i];
                str[i]=str[i+1];
                str[i+1]=ch;
                i++;
            }   

            //cout<<str<<endl;
                  
       }
       cout<<count<<endl;
       cout<<first<<" "<<second<<endl;

       //cout<<str<<endl;

        t--;
        }
        




    return 0;
    }
