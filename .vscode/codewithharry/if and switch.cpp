#include<iostream>

using namespace std;
int main()
{
int age;
cout<<"tell me  your age "<<endl;
cin>>age;
//if((age<18) && (age>0))
//cout<<"you cant come to party"<<endl;
//else if(age==18)
//cout<<"you will get a kid pass "<<endl;
//else
//cout<<"you can come "<<endl;


//***************switch case**************
switch(age)
{
    case 18:
    cout<<"your age is 18";
    break;
 case 22:
    cout<<"your age is 22"<<endl;
    break;
 case 2:
    cout<<"your age is 2"<<endl;

    break;


    default:
    cout<<"no special cases ";

}

    return 0;
}