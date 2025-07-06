#include<iostream>

using namespace std;
void sumarr()
{
    int n,s;
     cout<<"the size of array "<<endl;
    cin>>n;
   
int arr[n];
cout<<"enter the elements of array"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    /* code */
}
cout<<"sum of elements "<<endl;
for (int i = 0; i < n; i++)
{
     s=s+arr[i];
    
    /* code */
}
cout<<s;




}
int main(){
    sumarr();

    
    return 0;
}