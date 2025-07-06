/*THIS PROGRAM IS ABOUT CONSTRUCTORS IN DERIVED CLASS */

/*
1. WE can use constructor in derived class
2. If base class has no arguements , there is no need of any constructor in derived class
3. But if there are arguements in the base class constructor, derived class need to pass arguements to 
        the base class constructor .
4. If both base and derived classes have constructors , base class constructor is executed first.

// CONSTRUCTOR IN MULTIPLE INHERITANCE AND MULTILEVEL INHERITANCE


1.In multiple inheritance , base classes are constructed in the order in which they appear in the class
   declartion.

2.In multilevel inheritance, the constructors are executed in the order of inheritance.





//SPECIAL SYANTAX  
1. C++ supports an special syntax for passing arguements to multiple base classes
2. The constructor of the derived class recieves all the arguements at once tand then will 
   pass the calls to the repective base classes.
3.The body is called after all the constructors are executing .



SYNTAX:

Derived-constructor(arg1 , arg2 , arg3 , ---) : Base1-constructor(arg 1, arg 2) , Base2-constructor(arg3 ,arg 4)
{


    constructor body 
}

*/


/*
SPECIAL CASE OF VIRTUAL BASE CLASS

1. The constructors for virtual base classes are invoked before and non-virtual class.

2. If there are multiple virtual base classes , they are invoked in the order declared.

3. Any non-virtual base class are then constructed before the derived class constructed is 
    executed.
    

*/





#include<iostream>

using namespace std;


int main(){
    
    return 0;
}