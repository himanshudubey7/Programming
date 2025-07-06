//author: Ghostyy :D
#include<bits/stdc++.h>

#define ll long long 

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

    ll n;
    cin>>n;
//    string s= to_string(n);
   string str="";
ll temp = n;
while(temp>=10){
    int r = temp%10;
    temp/=10;
    if(r>=5){
        r = 9-r;
        str=to_string(r)+str;
    }
    else{
        str=to_string(r)+str;
    }
}
//  cout<<str<<endl;
if(temp == 9 || temp<5){
    cout<<temp<<str<<endl;
}
else if(temp<9 && temp>=5){
    cout<<9-temp<<str<<endl;
}

    return 0;
}