#include<iostream>

using namespace std;

class complex {
    int a, b;
            //creating a constructor 
                   // Constructor is a special member function with same name as of the class, 
             //It is used to initiliz the objects of its class.
            // It is automatically invoked whenever an object is created.
            // it has no return type.
            public:
complex(void);
 void print(){
    cout<<" your number is "<<a<<"+"<<b<<"i"<<endl;
 }
};

complex:: complex(void)//----> it is a default constructor as it accepts no parameter
{
    a=10;
    b=0;
}

int main(){
    complex c;
    c.print();
    return 0;
}

// Characterstics of Constructors
/*
1. it should be declared in the public section of the class.
2. they are automatically invoked whenever the object is created.
3. they cannot return values and do not have a return type.
4. it can have default arguements.
5. we cannot refer to their address.
*/