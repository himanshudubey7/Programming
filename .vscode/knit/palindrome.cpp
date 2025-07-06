//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    int len = s.length();
    int a=0;
    int e=len-1;
    while(a<e)
    {
        if(s[a] != s[e])
        {
            cout<<"not plindorm";
break;
        }
        else
        {
            a++;
            e--;

        }
        cout<<"palimdofjakdfhigfadgghfhga hai ";
        

    }
    return 0;
}