#include<iostream>
using namespace std;

int sum(int a , int b)
{


int c=a+b;
return c;
}
//*****************this will not swap the values*********

//int void swap(int a, int b)
//{
//    int t=a;
//    a=b;
//    b=t;
//}
//****************call by reference using pointers************
//void swapPointer(int* a, int* b)
//{
//
//
//int temp=*a;
//*a=*b;
//*b=temp;
//}
//**************call by reference using refernce variables***************
void swapReferenceVar(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=4,y=5;
    cout<<"the sum of 4 and 5 is "<<sum(x,y)<<endl;
cout<<"the values before swap of x is "<<x<<"the value of y"<<y<<endl;
//swap(x,y);**********not swap
cout<<"the value after swap"<<endl;
//swapPointer(&x,&y);//call by reference using pointers
swapReferenceVar(x,y);
cout<<"the value of x"<<x<<" the value of y "<<y<<endl;


    
    return 0;
}