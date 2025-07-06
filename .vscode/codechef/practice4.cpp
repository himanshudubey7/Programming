//SUM OF DIGITS OF A NUMBER

#include<iostream>
#include<string.h>

using namespace std;
int main(){
    int t;
    cout<<" enter the no. of test cases "<<endl;
    cin>>t;
    int n;
    
     int k;
    int sum =0;
    //char ch;
    while (t!=0)
    {
        cout<<" enter the number"<<endl;
    cin>>n;
    k=0;
    sum=0;
        while (n!=0)
        {
           // if (n<10)
           // {
           // sum = sum+n;
           // }
           // else
           // {
            k=n%10;
            sum = sum +k;
            //}
            n=n/10;

        }
        cout<<" the sum is "<<sum<<endl;

        t--;

    }

    return 0;
}