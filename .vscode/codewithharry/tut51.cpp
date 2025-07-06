// THIS PROGRAM IS ABOUT POINTERS IN OBJECT AND ARROW OPERATOR



#include<iostream>

using namespace std;

class complex{
    int real , imaginary ;

public:
void getdata()
{
    cout<<" the real part is "<< real <<endl;
    cout<<" the imaginary part is "<<imaginary <<endl;
}
void setdata(int a , int b)
{
    real = a;
    imaginary = b;
}
};

int main(){
    complex c1;

    complex *ptr = &c1;  //ptr is a pointer pointing to c1  and it can be also written as 
                            //complex *ptr = new complex;
    c1.setdata(1,5); // it can also be written as (*ptr).setdata(4,5);
    c1.getdata();

    //arrow operator(->) : basically it is used to deference .
    ptr->setdata(4,5);
    ptr->getdata();
    

    //Array of objects 
    complex *pt = new complex[4];
    pt->setdata(4,5);
    pt->getdata();
    
    return 0;
}