                /* IN THIS PROGRAM WE WILL SEE HOW TO MAKE A FRIEND FUNCTION OF SOMEOTHER CLASS FOR 
                                       SOMEOTHER CLASS*/                                                   
    //program description : THIS PROGRAM LETS YOU FIND SUM OF REAL AND 
                                              //IMAGINARY PART OF TWO COMPLEX NUMBERS


 //COMPILER WILL START READING THE PROGRAM FROM HERE (FROM TOP )                                      
#include<iostream>

using namespace std;

class complex;//FORWARD DECLRATION ---> promising compiler that a complex class is there in program


class calculator{
    public :
    int add(int a, int b){
    return(a+b);
    }
    
int sumrealcomplex(complex , complex);// you cannot write o1 and o2 objects as above you have told only 
int sumcompcomplex(complex , complex);             // about the complex class and not about its objects

};

class complex{
    friend int calculator :: sumrealcomplex(complex  , complex );
    friend int calculator :: sumcompcomplex(complex  , complex );
    int a , b;
    public:
    void setnumber(int n1  , int n2 ){

        a=n1;
        b=n2;

    }
 void print(){
    cout<<" your number is "<<a<<"+"<<b<<"i"<<endl;
 }
  
 
    
};
int calculator :: sumrealcomplex(complex o1 , complex o2  ){
        return (o1.a + o2.a );
    }
    int calculator :: sumcompcomplex(complex o1 , complex o2  ){
        return (o1.b + o2.b );
    }



int main(){
    complex c1, c2;
    c1.setnumber(3,4);
    c1.print();
    c2.setnumber(5,7);
    c2.print();

    calculator calc;
   int res= calc.sumrealcomplex(c1,c2);
   cout<<" the sum of real part of complex number is "<<res<<endl;
   int resc= calc.sumcompcomplex(c1,c2);
   cout<<" the sum of real part of complex number is "<<resc<<endl;

    
    return 0;
}