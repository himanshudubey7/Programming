#include<iostream>

using namespace std;
int sum(int a, int b)
{
    int c=a+b;
    return c;

}
//void swap(int a , int b)//this is only coping the value of xand y 
                          //but it can't afftect the actual parameters 
//{
//    int temp=a;
//    int a=b;
//    int b=a;

//}
void swapPointer(int* a, int* b)
{
    int* temp=a;
     *a=*b;
     *b=*a;
     *temp=*b;


}
int main()
{
    int x=4,y=5;
    cout<<"the sum of 4 and 5"<<sum(x,y);
    cout<<"before swaping "<<endl;

    cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
    cout<<"values of x and y after swap"<<endl;
swapPointer(&x,&y);
cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
    
    


    
    return 0;
}