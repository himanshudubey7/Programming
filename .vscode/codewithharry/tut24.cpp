//******************staic data members and methods and static variables
//program description and need of static variables:
/*                                                 in previous prog(tut23) we saw that we created
                                            a counter that was increasing with the increasing number of 
                                                  items in the shop but it was only for that object i.e b
                    But sometimes we have to create multiple objects and in that case if we want 
                          only a single counter for multiple objects then static variables comes in use
                            i.e A VARIABLE SAME FOR ALL OBJECTS*/


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
    counter++;
}
void getData(void)
{

    cout<<" the id of the employee is "<<id<<" and this is employee number "<<counter<<endl;;
}

};

int employee :: counter;// default value is 0
                        // static variable are need to define outside the class 
                        //this counter variable is shared by all the objects of class i.e by 
                        // ghosty , shivi , sudhanshu
int main(){
    employee ghosty , shivi , sudhanshu ;
    
    ghosty.setData();
    ghosty.getData();


    shivi.setData();
    shivi.getData();


    sudhanshu.setData();
    sudhanshu.getData();




    return 0;
}