#include<iostream>
#include<string>

using namespace std;


class employee 
{
    public:

string name;
string company;
int age;

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
};



int main()
{
employee emp1 = employee("Himanshu" , " KNIT ", 19);
//emp1.name = "Himanshu ";
//emp1.company = " KNIT ";
//emp1.age = 19;
emp1.intro();


employee emp2 = employee(" Shivi ", "TCS ", 21);
//emp2.name = " Shivi ";
//emp2.company = " TCS ";
//emp2.age = 21;
emp2.intro();   
    return 0;
}