/* THIS PROGRAM DEMOSTRATES HOW TO RESOLVE  SOME AMBIGUITIES IN INHERITENCE */

/*
AMBIGUITY 1: suppose there is a function with same name in both the base classes 
               in a multiple inheritance, then how will you make sure how a spcific class function 
                you need to call in derived class.



AMBIGUITY 2: if derived class and a base class has same name function then when calling a function 
             by creating a object of derived class in the main, which function will be called i.e 
             base class function or derived class one.                 
*/

#include<iostream>

using namespace std;

class base1 
{
public: 
void greet()
{
    cout<<" how are you ?"<<endl;
}
};

class base2
{
public :
void greet()
{
    cout <<" kaise ho app ?"<<endl;
}
};

class derived : public base1 , public base2
{
    int a ;
    public:
    void greet()
    {
        base1 :: greet();   //----->hence we resolve this ambiguity by using scope resolution 
    }
};

class b
{
public :
void say ()
{
    cout <<" Hello world "<<endl;
}
};

class D: public b
{
int a;
public :
void say()
{
    cout<<" hello my beautiful people "<<endl;
}
};


int main(){

    //AMBIGUITY 1



    //base1 base1obj;
    //base2 base2obj;

    //base1obj.greet();
    //base2obj.greet();
    //derived d;
    //d.greet();//  // which greet to run is ambigious 

    //AMBIGUITY 2

b b;
D d;
b. say();
d.say();  //D's new function say() will overwrite say() function of base class 

    
    return 0;
}