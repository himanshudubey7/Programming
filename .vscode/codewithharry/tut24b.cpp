//******************staic data members and methods and static variables
//program description and need of static variables:
/*                                                 in previous prog(tut23) we saw that we created
                                            a counter that was increasing with the increasing number of 
                                                  items in the shop but it was only for that object i.e b
                    But sometimes we have to create multiple objects and in that case if we want 
                          only a single counter for multiple objects then static variables comes in use
                            i.e A VARIABLE SAME FOR ALL OBJECTS*/

                  //THIS IS THE SECOND PART and in this we will create a static functions 
                    //need for static function: a function that can access all the static members(ONLY)
                            //                            and gets envoked by class name itself i.e it 
                            //                                does not need object creation


#include<iostream>

using namespace std;

class employee 
{
int id ;
static int counter;
// this counter variable is a static data member 

public:

void setData(void)
{
    cout<<" enter the id "<<endl;
    cin>>id;
    counter++;// this is static hence it is asscociated with class and every objects can use it z
}
void getData(void)
{

    cout<<" the id of the employee is "<<id<<" and this is employee number "<<counter<<endl;
}

static void getcount(void)
{
    cout<<" the value of count is "<<counter<<endl;
}

};

int employee :: counter;// default value is 0
                        //if you want any other initial value then edit only here and not inside the class
                        //syntax ---> int employee :: counter = 1000;
                        // static variable are need to define outside the class 
                        //this counter variable is shared by all the objects of class i.e by 
                        // ghosty , shivi , sudhanshu
int main(){
    employee ghosty , shivi , sudhanshu ;
    
    ghosty.setData();
    ghosty.getData();
    employee::getcount();

    shivi.setData();
    shivi.getData();
     employee::getcount();

    sudhanshu.setData();
    sudhanshu.getData();
    employee::getcount();



    return 0;
}