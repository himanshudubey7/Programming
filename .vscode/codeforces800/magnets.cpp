//DONE!!!
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    string st = "01";
    string str="10";
    int d=0;
    int l=0;
    for(int i=0;i<n;++i)
    {
        string s;
        cin>>s;
        if(s == st && d==0)
        {
            ++cnt;
            l=0;
            d=1;
        }
        else if(s== str && l==0)
        {
            ++cnt;
            d=0;
            l=1;
        }
        
    }
    cout<<cnt<<endl;
    return 0;
}