#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    int lower = 0;
    int upper = 0 ;

    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if(islower(s[i]))
        {
            lower++;
        }
        else
        upper++;
    }
    if(upper>lower)
    {
        transform(s.begin() , s.end(), s.begin(),:: toupper);
        cout<<s;
    }
    else
    {
    transform(s.begin() , s.end(), s.begin(),:: tolower);
    cout<<s;
    }


    return 0;
}