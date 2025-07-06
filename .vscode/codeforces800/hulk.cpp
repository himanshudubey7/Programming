//DONE!!!
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s = "that";
    string str = "it";
    string st = "I hate";
    string p = "I love";
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<st<<" ";
        }
        else if(i%2==0)
        {
            cout<<p<<" ";
        }
        if(i == n)
        {
            cout<<str;
        }
        else 
        {
            cout<<s<<" ";
        }

        
    }
    return 0;
}