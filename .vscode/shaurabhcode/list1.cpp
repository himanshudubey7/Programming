/*
IN THIS CODE WE WILL LEARN ABOUT LIST CLASS AND LEARN HOW TO CREATE IT'S OBJECT AND PUT VALUES IN IT
 AS WELL AS WE WILL ALSO LEARN HOW TO PRINT THE VALUES .

 [ ] ---> operator does not work on list
 AND IN THIS CODE WE ALSO LEARNED ABOUT SOME FUNCTIONS OF LIST LIKE:
 1.size()
 2.push_front()
 3.push_back()
 4.pop_front()
 5.pop_back()
*/



#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l1 {11,2, 334 ,44, 99, 44, 21};  //declaratin of object of class list and initilisation
    list <string> l2 {"INDIA" , "DHAKA" , "CANADA"};
    
    //we can print values using itreator 
    list <string> :: iterator p =l2.begin();
    while(p!=l2.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl<<" total values in the list are = "<<l2.size()<<endl;
    l2.push_back("BHOPAL");
    l2.push_front("HINDUSTAN");
p=l2.begin();
     while(p!=l2.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl<<" total values in the list are = "<<l2.size();

    return 0;
}