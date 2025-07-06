/*IN THIS PROGRAM WE WILL UNDERSTAND THE TEMPLATES AND CREATE A FUNCTION TEMPLATE OR A 
         GENERIC FUNCTION */

#include<iostream>

using namespace std;

template <class x> 
x bigt(x a , x b)  //generic function
{
    if(a>b)
    {

    

    return a;
    }
    else
    {
    return b;
    }
}
int main(){
     
    cout<<bigt(4,5)<<endl;
    cout<<bigt(5.6,6.4);
    
    return 0;
}