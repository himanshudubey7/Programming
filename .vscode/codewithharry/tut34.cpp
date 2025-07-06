// COPY CONSTRUCTOR---->   A copy constructor is a member function that 
                                        //initializes an object using another object of the same class.

#include<iostream>

using namespace std;
class number{
int a;
public:
number(){
    a=0;
}

number(int num){

    a=num;
}

//NOTE:-----> when there is no copy constructor compiler supplies its default copy constructor 

number(number  &obj){//copy constructor created 
cout<<" copy constructor called!!!!"<<endl;
    a = obj.a;
}







void display(){
cout<<" The number for this object is "<<a<<endl;

}





};
int main(){

    number x, y, z(45) ,z2;
    z.display();
    //basically copy constructor creates a copy of an object 
       /*suppose we have to create a object z1 that should exactly resemble z then 
       we will create z1 using copy constructor that then pass z.*/


number z1(x);//copy constructor invoked!!
z1.display();

z2 = z;// copy constructor not invoked
 

 number z3 = z; // copy constructor will be invoked


    return 0;
}