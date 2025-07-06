#include<iostream>

using namespace std;
int fib(int n)
{
    if(n<2)                       
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);           //intput = 3
}                                         //fib(3) =fib(1)+fib(2)
int main(){                               // fib(3)=  1   + fib(0)+fib(1)
                                          // fib(3)=  1   +    1   +  1  
    int a;                                //  fib(3)=   3
    cout<<"enter the term "<<endl;
    cin>>a;
    cout<< "the "<<a<<" is "<<fib(a);

    return 0;
}