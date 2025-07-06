#include<iostream>

using namespace std;

class complex 
{

    int a , b;

    public:

    void setData (int v1 , int v2){
        a=v1;
        b=v2;
    }
    void setdatabysum(complex o1 , complex o2 )  // object passing in function
    {
      a= o1.a + o2.a; //  here a  is storing the value of a in object 1 and value of a in object 2
      b= o1.b + o2.b; //  here b  is storing the value of b in object 1 and value of b in object 2 
    }
    void print(void)
    {
        cout<<endl;
        cout<<" your complex number is "<<a<<"+"<<b<<"i"<<endl;
        cout<<endl;
    }

    
};
int main(){
    complex c1, c2 , c3;
    int r, i;

    cout<<"enter real part "<<endl;
    cin>>r;
    cout <<"enter the imaginary part "<<endl;
    cin >> i;
    c1.setData(r,i);   //c1 object stores the first complex number
    c1.print();
    r=0;
    i=0;
    cout<< "enter the real part "<<endl;
    cin>>r;
    cout <<"enter the imaginary part "<<endl;
    cin >> i;

    c2.setData(r,i);   // c2 object stores the second complex number 
    c2.print();


cout<<" the sum of complex numbers "<<endl;

    c3.setdatabysum(c1,c2);   //c3 object stores the sum of complex numbers stored in c1 and c2.
    c3.print();
    
    return 0;
}