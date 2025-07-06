//jarvis is here:D
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;


    string s=to_string(n);
    for(int i=1;i<s.length();i++)
    {
        int k=s[i]-'0';
        if(k>=5)
        s[i]=('9'-s[i])+'0';
    }
    cout << s << endl;

    return 0;
}