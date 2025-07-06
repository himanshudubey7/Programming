/* THIS PROGRAM IS ABOUT VIRTUAL BASE CLASS IN C++*/


/*
VIRTUAL BASE CLASS:

consider a situation where a class A is inherited by other two class B and C 

Both these classes are again inherited into a single class D

which also states that data members(lets say int a ) of class A will be inherited by class B and class C 
then int a will also be inherited by class D twice i.e one by class B
and other by class C . When any function of class A is called through 
object of class D  ambiguity arises as to which data/function member 
would be called? One inherited through B or the other inherited through C. 
This confuses compiler and it displays error.




*/



/*

SYNTAX FOR VIRTUAL BASE CLASS:

class B : public virtual A
{

    class body ---->members and function
};
class C : public virtual A
{
class body

};

Note: virtual can be written before or after the public. 
Now only one copy of data/function member will be copied to class C and class B and class A becomes
 the virtual base class




Virtual base classes offer a way to save space and avoid ambiguities in class
 hierarchies that use multiple inheritances. When a base class is specified as a virtual base, 
 it can act as an indirect base more than once without duplication of its data members.
 A single copy of its data members is shared by all the base classes that use virtual base.








*/


#include<iostream>

using namespace std;
int main(){
    
    return 0;
}