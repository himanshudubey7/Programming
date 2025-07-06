#include<iostream>
#include<string.h>

using namespace std;


int main(){

    int t,n,i,j,l;
    cout<<" enter no. of test cases "<<endl;
    cin>>t;
    char ch;
    string s, str;
    while(t!=0)
    {
        cout<<" enter your no. "<<endl;
        cin>>n;
        s= to_string(n);
        l=s.length();
        for(i = 0; i<l;i++)
        {
            ch =s.at(i);
            str = ch+str;

        }
        cout<<" the reversed no ."<<endl;
        cout<<str<<endl;
        str ="";
        t--;


    }

    
    return 0;
}