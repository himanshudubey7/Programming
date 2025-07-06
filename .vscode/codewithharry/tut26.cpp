                        /*THEORY OF FRIEND FUNCTION
1.--------> not in the scope of the class
2.--------> since it is not in the scope of class , it cannot be called from the object of
                that class. c1.sumcomplex()== INVALID
3.--------> can be invoked without the help of any object 
4.--------> usually contains objects as arguements 
5.--------> can be declared inside public or private section of the class 
6.---------> it cannot access the members of class directly by their names and need object 
                       name.member name to access any member.*/

#include<iostream>

using namespace std;
class complex 
{
    int a , b;
    public:
    friend complex sumcomplex (complex o1 , complex o2);// this line means that sumcomplex function is 
                                                          //allowed to use  private members of this class
    void setnumber (int n1 , int n2){

        a=n1;
        b=n2;

    }
    
 void print(){

    cout<<" your number is "<<a<<"+"<<b<<"i"<<endl;
 }
 

};

complex sumcomplex(complex o1 , complex o2)
 {

    complex o3;
    o3.setnumber((o1.a+o2.a) , (o1.b + o2.b));
     return o3;
 }
int main(){
    complex c1, c2 ,sum;
    c1.setnumber(1,4);
    c1.print();

    c2.setnumber(5,8);
    c2.print();

    sum= sumcomplex(c1,c2);
    sum.print();
    
    return 0;
}



