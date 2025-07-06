/*
THIS PROGRAM IS ABOUT INITILISATION OF VARIABLES IN CONSTRUCTOR 
*/

#include<iostream>

using namespace std;
/*
Syntax for Initilisation list in constructor:
constructor (arguement-list) : initillisation- section
{
    assignment+other code;
}
class test{
int a , b;
public:
test(int i ,int j) : a(i) , b(j)
{
    constructor body
}

//a will be assigned with the value in i and b with j



*/


class test{
int a , b;
public:
//a will be assigned with the value in i and b with j
test(int i ,int j) : a(i) , b(i+j)
{
    cout<<" constructor executed "<<endl;
    cout<<" the value of a is "<<a<<endl;
    cout<<" the value of b is "<<b<<endl;
}

};

int main(){

    test t(4,6);
    
    return 0;
}