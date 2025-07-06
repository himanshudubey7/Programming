/*
TUPLE CLASS:
Just like in pair , we can pair two hetrogeneous objects , in tuple we can pair multiple objects.


SYNTAX:
tuple<T1,T2,T3> object name;

T1,T2.T3 can be of primitive as well as of non- primitive data type 

Example:
tuple<string , int , int>t1;

INSERTING VALUE:

t1 = make_tuple("INdia" , 16 , 10);

ACCESSING TUPLE MEMBERS:
tuple <string , int , int> t1;
t1 = make_tuple("India" , 16, 10);

cout<<get<0>(t1)<<endl; ---->India
cout<<get<1>(t1)<<endl; ---->16
cout<<get<2>(t1)<<endl; ---->10


NOTE: COMPARISION OPERATORS DO WORK ON TUPLE ALSO
*/


#include<iostream>
#include<tuple>

using namespace std;
int main(){
    tuple<string , int , int> t1;
    t1 = make_tuple("himanshu" , 20 , 2002);//assigning values in t1
    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;

    
    return 0;
}