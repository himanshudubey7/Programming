//constructor with default arguements


#include<iostream>

using namespace std;

class simple{
    int data1;
    int data2;
    public:
    simple(int a , int b =9)//b is assigned with a defult value 
    {
        data1 = a;
        data2 = b;

    }

    void printdata();




};

void simple::printdata()
{

    cout<<" the value of data 1 and data 2 is "<<data1<< ","<<data2<<endl;
}


int main(){
    simple s(1);// as no value is passed for b hence it will show its default value
    
    s.printdata();
    return 0;
}