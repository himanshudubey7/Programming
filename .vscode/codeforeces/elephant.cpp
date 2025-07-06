#include<iostream>

using namespace std;
int main(){
    int n ; 
    cin>>n;
    if(n%5==0)
    {
        cout<<(n/5)<<endl;
    }
    else
    {
    int t = n/5;
    cout<<(t+1);
    }
    return 0;
}