#include<iostream>

using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    

    return n* factorial(n-1); 
}
int main(){
    //factorial of a number 
    //n!= n * (n-1)!
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    cout <<" the factorial of "<<a<<" is "<<factorial(a);
    
    return 0;
}