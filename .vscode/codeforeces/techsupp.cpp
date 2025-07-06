#include<iostream>

using namespace std;
int main(){
    int t; 
    cin>>t;
    char ch;

    while(t!=0)
    {
    int n;
    cin>>n;
        string s;
        cin>>s;
        //int l = s.length();
        bool flag =false;
        for (int i = 0; i < n; i++)
        {
           if(s[i]=='Q')
           {
           flag = false;
           
           for (int j = i+1; j <n; j++)
           {
            if(s[j]=='A')
            {
            s[i]='0';
            s[j]='0';
            flag = true;
            //cout<<s<<endl;
            }
           
            if(flag== true)
            {
           break;
            }
            
           }
           }
        } 

        if(flag == true)
        cout<<"YES"<<endl;
        else if(flag == false)
        cout<<"NO"<<endl;
          
        
        t--;
    }
    
    return 0;
}