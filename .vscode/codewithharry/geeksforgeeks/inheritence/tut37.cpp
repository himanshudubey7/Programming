//inheritence question 1 from geeks for geeks 

#include<iostream>

using namespace std;


class base1
{
    public:
base1(){
cout<<"constructor for base1 class is called"<<endl;
}
};

class base2{
public:
base2(){
cout<<"constructor for base2 class is called"<<endl;
}
};


class derived : base1 ,  base2
{
    public:

    derived(){
        cout<<" constructor for derived class is called"<<endl;
    }

};
int main(){

    derived d;//When a class inherits from multiple classes, 
                //constructors of base classes are called in the same order 
                //as they are specified in inheritance.
                


                /*destructors are called in opposite order as that of constructors
                      here  if destructors are called then derived class's destructor would 
                      have been called first then base2 class and then finally base1*/

    
    return 0;
}