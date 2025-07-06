
//this program illustrates the constructor overloading
// constructors with same name are envoked whenever a object is created and compiler knew which one 
// to envoke according to arguements type passed.



#include<iostream>

using namespace std;
class complex{
int a , b;
public:
complex(int x , int y ){
    a= x;
    b= y;

}

complex(int p)
{
    a=p;
    b=0;
}
void print(){
    cout<<" your number is "<<a<<"+"<<b<<"i"<<endl;
 }

};
int main(){
    complex c1(4,6);
    c1.print();

    complex c2(5);
    c2.print();

    return 0;
}