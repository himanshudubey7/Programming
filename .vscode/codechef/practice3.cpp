//FINDING THE REMINDER 



#include<iostream>

using namespace std;
int main(){
int n, i, j;
int a, b;
cout<<" enter the value of n "<<endl;
cin>>n;

    while(n!=0)
    {
        cout<<" enter dividend and divisior "<<endl;
        cin>>a>>b;
        cout<<" the reminder is :"<<a%b<<endl;
        n--;

    }
    
    return 0;
}