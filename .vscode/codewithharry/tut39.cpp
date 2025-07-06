#include<iostream>

using namespace std;
class base {
    protected:   // protected is like private but it can be inherited by derived class
    int a;
    private:
     int b;


    
};
/*
For a protected member :
                         Public derivation          Private derivation          Protected derivation

1. private members         Not inherited              Not inherited                Not inherited 
2. protected members       Protected                     Private                     Protected 
3. public members          public                        Private                     Protected 
*/
class derived : protected base{

};
int main(){

    base b ;
    derived d ;
    //cout <<b.a;  ---------> will not work as 'a' is protected in both base as well as derived class  
    
    return 0;
}