/*  create 2 classes 
1. simple calculator ----> Takes input of two numbers using a utility function and performs + , - , *,/
                                 and displays the results using another function.


2. scientific calculator ----> takes input of two numbers using a utility function and performs any 
                                  four scientific operation of your choice and displays the results 
                                   using another function.



create another class Hybridcalculator and inherit it using these 2 classes :
Q1. What type of Inheritance are you using ?   ----> multiple inheritance
Q2. Which mode of Inheritance are you using ?   ----->  public inheriting both the classes.
 
Q3. Create an object of Hybridcalculator and display results of simple and scientific calculator .
Q4. How is code reusability implemented ? 
                    
 */


#include<iostream>
#include<cmath>

using namespace std;
class simple_calc
{
    protected:

int a,  b;

public :

void accept(int n1 , int n2)
{
    a= n1;
    b = n2;

}



void display(void) 

{
    cout<< " the sum of numbers = "<<(a+b)<<endl;
    
    cout <<" the difference of numbers = "<<(a-b)<<endl;
    cout <<" the multiplication of numbers = " <<(a*b)<<endl;
    cout <<" the division of numbers = "<<(a/b)<<endl;

}


};

class scientific_calc{
protected:
int x , y;
public:
void input(int n1 , int n2)
{
    x = n1;
    y = n2;

}


void display_s(void )
{
cout<<" max of numbers = "<<max(x, y)<<endl;
cout<<" min of numbers = "<<min(x , y)<<endl;
cout<<"sine value of x and y = "<<sin(x)<< " and  "<< sin(y)<<endl;
cout<<"tangent value of x and y = "<< tan(x)<<" and "<< tan(y) <<endl;
}




};

class Hybridcalc : public simple_calc , public scientific_calc
{


};






int main(){


    int a, b;
cout<<" enter the numbers for simple calculation "<<endl;
cin>>a>>b;

 Hybridcalc h;
    h.accept(a ,b);
    h.display();

    cout<<endl;

    a=0;
    b=0;
cout<<" enter the numbers for scientific calculation "<<endl;
cin>>a>>b;

    h.input(a , b);
    h.display_s();

    
    return 0;
}