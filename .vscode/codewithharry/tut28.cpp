/*  a simple example to demonstrate to create a friend function of someother class for someother class*/

#include<iostream>

using namespace std;


class Y;  // forward declaration for class Y 
class X{
     int data; 
     public:
     void setvalue (int value){
        data = value;

     }

friend void add(X , Y);
};

class Y{

    int num;
    public: 
    void setdata(int value){
        num = value;
    }
friend void add(X , Y);
    
};

void add(X o1 , Y o2){
        cout<<" sum of data X and Y objects gives me "<<o1.data + o2.num;
    }
int main(){
    X a;
    Y b;
a.setvalue(15);
b.setdata(5);
add(a,b);
    
    return 0;
}