//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
    long long n, k;
    cin>>n>>k;
    if(n%2 !=k %2 ){
        cout<<"NO"<<endl;
    }
    else if(k*k >n){
        cout<<"NO"<<endl;
    }
   
    else{
        cout<<"YES"<<endl;
    }
    }
    return 0;
}