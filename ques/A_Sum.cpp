//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a, b,c;
    cin>>a>>b>>c;
    int sum1, sum2 , sum3;
    sum1 = a+b;
    sum2 = b+c;
    sum3 = a+c;
    if(c == sum1 || a== sum2||b == sum3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }
    return 0;
}