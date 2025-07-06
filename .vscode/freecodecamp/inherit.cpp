#include<iostream>

using namespace std;
class abstractemployee{

    virtual void askforpromotion()=0;
};

class employee :abstractemployee
{
public:
string name;
string company;
int age ;



employee(string Name , string Company , int Age)
{
name = Name;
company = Company;
age = Age;

}

void askforpromotion(){
    if (age>=20)
    cout<<name<<" got promoted! "<<endl;
    else
    cout<<name<<" sorry no promtion for you "<<endl;
}


};

class developer:public employee 
{
    public:
string favproglang;

developer(string Name , string Company , int Age , string Favproglang):employee(Name,Company,Age)
{

favproglang=Favproglang;

}

void fixbug()
{
    cout<<name<<"fixed bug using "<<favproglang<<endl;
}


};

class teacher:public employee{
    public:
string subject;
void preparelesson()
{

    cout<<name<<"is preparing "<<subject<<" lesson "<<endl;
}

teacher(string Name , string Company , int Age , string Subject):employee(Name,Company, Age)
{
subject = Subject;
}
};
int main(){


    developer d = developer (" Himanshu " , " google " , 19 , "c++");
    teacher t = teacher (" shivi " , "DAV",  21,  "history");
    t.preparelesson();
    t.askforpromotion();
    d.fixbug();
    d.askforpromotion();
    return 0;
}