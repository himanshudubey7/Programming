//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    long long n;
    cin>>n;
    int i = 20;
    int tem  =20;
    int c = 6;
    int t = 4;
    int d = 12;
    int o = 8;
    long long sum = 0;
    for(int i =0;i<n;i++){
        string s;
        cin>>s;

        if(s[0]== 'I')
        {
        sum = sum+tem;
        }
        
        else if(s[0] == 'C')
        sum+=c;
        else if(s[0] == 'T')
        sum += t;
        else if(s[0] == 'D')
        sum += d;
        else if(s[0] == 'O')
        sum += o;

    }
    cout<<sum<<"\n";
    return 0;
}