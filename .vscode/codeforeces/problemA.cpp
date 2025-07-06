#include<iostream>

using namespace std;
int main(){
    int t;
    int n,i;
int sum;
    cin>>t;
    while(t!=0)
    {
        int m = 3;
        int flag = 0;
        sum = 0;
        cin>>n;
        sum = n+m;
        if(n %2!=0)
        {
            sum = n+m;
            cout<<m<<endl;
        }
        else if (n%2 ==0)
        {
            m=2;
            sum = n+m;
            cout<<m<<endl;
        }
    t--;
    }
    return 0;
}