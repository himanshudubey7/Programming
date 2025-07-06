#include<iostream>

using namespace std;

int sum(int n)
{
    
    long sum;
    

    int arr[n];
    
    cout<<"enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the sum of array elements is "<<endl;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"the sum is = "<<sum<<endl;
    
}
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    sum(n);
    
    return 0;
}