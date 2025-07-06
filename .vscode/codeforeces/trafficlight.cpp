#include<iostream>

using namespace std;
int main(){
    int n, i, t ;
    char c, chr;
    int count = 0;

    string s;

    cout<<" enter the no. of test cases "<<endl;
    cin>>t;

    while(t!=0)
    {
    cout<<" enter value of n and c"<<endl;
    cin>>n>>c;   //n-->length of string 
    cout<<" enter the string "<<endl;
    cin>>s;

    for(i= 0 ; i<n ; i++)
    {
        chr = s.at(i);
        if(chr!='g')
        {
            count ++;
        }
    }

    t--;
    }
    return 0;
}