/*
THIS POINTER IN C++
this : is a keyword which is a pointer which points to the object which invokes the member function
*/

#include<iostream>

using namespace std;
class A{
    int a ;
    public:
    void setdata(int  a){
       this->a  = a;
    }
    void getdata(void)
    {
        cout<<"the value of a is "<<a<<endl;
    }

};
int main(){
    A a;
    a.setdata(4);
    a.getdata();
    
    return 0;
}