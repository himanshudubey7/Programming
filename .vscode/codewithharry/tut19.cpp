                //****************** function overloading *******************//
#include<iostream>

using namespace std;

int sum(int a , int b)
{
    return a+b;

}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int volume (double r, int h)
{
    return (3.14 *r *r *h);

}
int volume(int  a)
{
    return a*a*a;
}
int volume (int l, int b, int h)
{
    return l*b*h;
}
int main()
{
    int a,b,c;
    cout<<"enter the numbers "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"the sum of numbers "<<sum(a,b)<<endl;
    cout<<"the sum of numbers "<<sum(a,b,c)<<endl;
    cout<<" the volume of cylinder  with dimensions of radis 3 and height 6  is =  "<<volume(3,6)<<endl;
    cout<<" the volume of cube  with dimensions of side 3  is =  "<<volume(3)<<endl;
cout<<" the volume of  box  with dimensions of 3 , 6 and 7  is =  "<<volume(3,7,6)<<endl;
    
    return 0;
}