/*

IN THIS CODE WE WILL SEE HOW TO USE MORE FUNCTIONS OF LIST CLASS LIKE :

1. sort()

2.reverse()

*/


#include<iostream>

#include<list>


using namespace std;

int main()
{
    list<int> l {7, 5, 4, 66, 34, 34 , 546, 3413};
    list<int>:: iterator p =l.begin();
        cout<<"original list"<<endl;

    while(p!=l.end())
    {
        cout <<*p<<" ";
        p++;
    }
    //sorting 
    l.sort();

     cout<<endl<<"after sorting "<<endl;
     p = l.begin();
    while(p!=l.end())
    {
        cout <<*p<<" ";
        p++;
    }
    //reversing
    l.reverse();
     cout<<endl<<"after reversing"<<endl;
     p = l.begin();
    while(p!=l.end())
    {
        cout <<*p<<" ";
        p++;
    }
       
    return 0;
}