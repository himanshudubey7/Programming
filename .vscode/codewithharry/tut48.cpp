#include<iostream>

using namespace std;

/*

case 1:
class b : public a{
 order of execution of constructor----->   first A() then B()
};

case 2:

class A : public B , public C{

    Order of execution of constructor ---> B() then C()
};


case 3:

class A : public B , public virtual C{

order of execution of constructor ---> C() then B()
};


*/


class base1{

int data1;
public :
base1 (int i )
{
    data1 = i;
    cout<<" base1 class constructor is called "<<endl;
}

void print_database1(void)
{
    cout<<" the value of data is "<<data1<<endl;
}

};

class base2{

int data2;
public :
base2 (int i )
{
    data2 = i;
    cout<<" base2 class constructor is called "<<endl;
}

void print_database2(void)
{
    cout<<" the value of data is "<<data2<<endl;
}

};

class derived : public base1 , public base2{
int derived1 , derived2;

public :
derived(int a , int b , int c , int d ): base1(a) , base2(b)
{
    derived1= c;
    derived2 = d;
    cout <<" derived class constructor is called "<<endl;
}

void printdata(void){
    cout<<" the value of derived 1 "<<derived1<<endl;
    cout<<" the value of derived 2 "<<derived2<<endl;
}
};


int main(){

    derived d(1,2 , 3, 4);
    d.print_database1();
    d.print_database2();
    d.printdata();
    
    return 0;
}