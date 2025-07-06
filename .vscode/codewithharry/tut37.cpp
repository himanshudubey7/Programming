/*Program to understand inheritance and to know about how to derive a class from a base class*/

#include<iostream>

using namespace std;
class employee{                 //base class
public:
int id;
float salary;
employee(int inpid)
{
    id = inpid;
    salary = 34;


}
employee(){}                   //default constructor of base class


};


//syntax for how to derive a class from a base class 
/* class {{derived class name}} : {{visibility mode}} {{base class name}}*/



/*NOTE ::
1. deafult visiblity mode is private
2. public visibility mode: Public members of the base class becomes Public members of the derived class
3. private visiblity mode: Public members of the base class becomes Private members of the derived class
4. Private members of a base class are never inherited .
*/

class programmer : employee{
    public:
    programmer(){}    //deafault constructor for derived class
    programmer(int inpid)
    {
        id = inpid;

    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }

};

int main(){
    employee himanshu(1), shivi(2);
    cout<<himanshu.salary<<endl;
    cout<<shivi.salary<<endl;
programmer arjun(3);
arjun.getdata();




    return 0;
}