/*PROGRAM TO DEMONSTRATE MULTIPLE INHERITENCE */



#include<iostream>

using namespace std;


//Syntax for inhriting in multiple inheritance  
/*
class derived : visibility-mode base1 , visibility - mode base2
{
    class body of class " derived"
};

*/
class base1{
protected : 
int base1int ;
public :
void set_base1int(int a )
{
    base1int = a; 
}

};

class base2
{

protected :
int base2int;

public : 
void set_base2int (int a)
{
    base2int = a;
}

};

class derived : public base1 , public base2
{
  public :
  void show()
  {
    cout <<" the value of base1 is "<<base1int<<endl;
    cout <<" the value of base 2 is "<<base2int<<endl;
    cout<<" the sum of these two values is "<< base1int+base2int<<endl;

  }  
};
/*
The inherited derived class will look something like this :

Data members:

base1int ----> protected 
base2int -----> protected




member function :
set_base1int()------> public 
set_base2int() -----> public 
show() -----> public

*/


int main(){

    derived d;
    d.set_base1int(25);
    d.set_base2int(30);
    d.show();
    
    return 0;
}