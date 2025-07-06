#include<iostream>
#include<string>

using namespace std;
class employee 
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
//emp1.setname(" Himanshu ");
emp1.setage(15);
cout<<emp1.getname()<<" is "<<emp1.getage()<<" years old "<<endl;

   
    
    return 0;
}