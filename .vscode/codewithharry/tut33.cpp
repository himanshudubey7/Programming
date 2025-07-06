//THIS PROGRAM ILLUSTRATES THE DYNAMIC INITILIZATION OF OBJECTS USING CONSTRUCTORS
            //PROGRAM DESCRIPTION :
            /* this program takes principal amount , time of deposit  , and interest rate from user 
                         and calculates the return amount */
//DYNAMIC INITILIZATION MEANS: Dynamic initialization of object refers to initializing 
                                 //the objects at a run time i.e., the initial value 
                                          //of an object is provided  during run time. 
                                    //It can be achieved by using constructors and 
                                    //by passing parameters to the constructors.



#include<iostream>

using namespace std;

class bank{

    int principal;
    int years;
    float rate;
    float returnvalue;

    public:
    bank(){}
    bank(int p , int y , float r);  // r can be a value like 0.04(floating point number)
    bank(int p , int y , int r ); // r can be a value like 4

    void show(void);
};




bank:: bank (int p , int y , float r )
{
principal = p;
years =y;
rate = r;
returnvalue = principal;

for (int i = 0; i < y; i++)
{
    returnvalue = returnvalue*(1+r);
}
}


bank:: bank (int p , int y , int r )
{
principal = p;
years =y;
rate = ((float)r/100);
returnvalue = principal;

for (int i = 0; i < y; i++)
{
    returnvalue = returnvalue*(1+rate);
}
}

void bank::show(){
if (years>1){

    cout<<endl<<" principal amount was "<<principal<<endl
              <<" return value after "<<years
              <<" years is "<<returnvalue<<endl;
}

              else if(years==1)
              {
              cout<<endl<<" principal amount was "<<principal<<endl
              <<" return value after "<<years
              <<" year is "<<returnvalue<<endl;
              }

              

}


int main(){
bank b1, b2 , b3;
int p;
float r;
int t;
int R;
cout<<" enter value of p , t, r(in floating point) "<<endl;
cin>>p>>t>>r;
 b1 = bank(p , t, r);
b1.show();


cout<<" enter value of p , t, R(integer) "<<endl;
cin>>p>>t>>R;

b2 = bank(p , t, R);
b2.show();




    
    return 0;
}