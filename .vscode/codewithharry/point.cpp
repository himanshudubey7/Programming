#include<iostream>

using namespace std;
int main(){
    int a=3;
    int* b= &a;
    
    //int*-----> use to represent the pointer data type 
    cout<<b<<endl;
    
    //&----> (adress of) operator


    //*----->(the value at) Dereference operator

    cout<<" the value at address b = "<<*b<<endl;

    return 0;
}