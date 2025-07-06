/*IN THIS PROGRAM WE WILL LEARN ABOUT TEMPLATE CLASS PAIR 
HOW TO CREATE IT'S OBJECT AND HOW TO WORK WITH IT*/
/*
SYNTAX OF USING A PAIR OBJECT :


pair<data_type1 ,data_type 2> name of object;


NOTE:
WE CAN CREATE A PAIR OF PRE-DEFINED CLASSES AS WELL AS OUR CREATED CLASSES 

INSERTING VALUE IN A PAIR:
p1 = make_pair("Ghosty ".16);


ACCESSING PAIR MEMBERS:

pair<string , int>p1;
p1 = make_pair("himanshu" ,20);
cout<<p1.first<<endl;
cout<<p1.second<<endl;


COMPARE TWO PAIRS:
==
!=
<
>
<=
>=

*/

#include<iostream>

using namespace std;
class student 
{
    private:
    string name;
    int age;
    public :
    void setstudent(string s, int a)
    {
        name = s;
        age = a;

    }
    void showstudent (void)
    {
        cout<<"name of the student -> "<<name<<endl;
        cout<<"age of the student -> "<<age<<endl;
    }



};
int main(){
    pair<string , int>p1;
    p1 = make_pair("Himanshu" , 20);
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    pair<string , string>p2;
    p2 = make_pair("India", "New Delhi");
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    pair<float , string> p3;
    p3 = make_pair(345.56, " Learning c++");
    cout<<p3.first<<endl;
    cout<<p3.second<<endl;
    pair<student , int> p4; 
    student s1;
    s1.setstudent("Himanshu" ,20);


    
    
    p4 = make_pair(s1,1);
    student s2 = p4.first;

    cout<<p4.second<<endl; 
    s2.showstudent();
    return 0;
}