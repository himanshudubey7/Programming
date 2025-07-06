#include<iostream>

using namespace std;

class complex {
    int a, b;
            
            public:
complex(int , int );
 void print(){
    cout<<" your number is "<<a<<"+"<<b<<"i"<<endl;
 }
};

complex:: complex( int x ,  int y)//---->paramaterized  contructor as it takes  two parameters 
{
    a = x;
    b = y;
}
int main(){
    //Implicit call
    complex c(4 , 6);
    c.print();
      
      // Explicit call
      complex m = complex(5 ,7);
      m.print();
    
    return 0;
}