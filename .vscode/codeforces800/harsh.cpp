#include<bits/stdc++.h>

using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    if(a>b)
    {
        int div = a/b;
        cout<<div<<endl;
        int rem = (a-(b*div));
        cout<<"the rem is =  "<<rem<<endl;
    }
    else
    {
        cout<<"INvalid input"<<endl;
    }
    return 0;
}