#include<iostream>
#include<string>

using namespace std;

class abstractemployee{   //-------->abstract class
 virtual void askforpromotion()=0;
};
class employee:abstractemployee //--------y-->here the employee class is inheriting the abstract class
{
    

string name;
string company;
int age;


public:

void setname(string Name) //setter
{
name = Name;
}
string getname()// getter
{ return name;

}
void setcompany(string Company) //setter
{
Company = company;
}
string getcompany()// getter
{ return company;

}
void setage(int Age) //setter
{
    if (Age>=18)
    {
age = Age;
    }
}
int getage()// getter
{ return age;

}
void intro()
{
    cout<<" Name "<<name<<endl;
    cout<<" company "<<company<<endl;
    cout<<" age "<<age<<endl;

}

employee(string Name, string Company, int Age) //constructor
{
name = Name;
company = Company;
age = Age ;
}
void askforpromotion(){
    if (age>=20)
    cout<<name<<" got promoted! "<<endl;
    else
    cout<<name<<" sorry no promtion for you "<<endl;
}




};


int main()
{
employee emp1 = employee("Himanshu" , " KNIT ", 19);
//emp1.intro();


employee emp2 = employee(" Shivi ", "TCS ", 21);

//emp2.intro();
emp1.askforpromotion();
emp2.askforpromotion();
   
    
    return 0;
}