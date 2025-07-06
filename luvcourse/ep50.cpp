
#include<bits/stdc++.h>

using namespace std;
int main(){
    //swapping numbers using xor
    /*
    x^x = 0
    x^0 = x
    */
   int a =4,b = 6;
   a = a^b;
   b = b^a;// b = b^(a^b)
            // b = b^b^a---> 0^a=>  b  = a
   a = a^b;    //a = (a^b)^a --> a^a^b---> 0^b --> a = b;
   cout<<a<<" "<<b<<endl;     
    return 0;
}