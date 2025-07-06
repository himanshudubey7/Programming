#include<iostream>

using namespace std;
class shopitem 
{
int id ;
float price;
public:
void setdata(int a , float b)
{
    id = a ;
    price = b;
}
void getdata(void )
{
    cout<<" code of this item is "<<id<<endl;
    cout<<" price of this item is "<<price<<endl;

}
};

int main(){
    int size = 3;

    //int *ptr = &size;
    //int *ptr = new int[34]; //dynamically allocate memory to store the 34 integers

    //general store item 
    //veggies item
    //hardware item 

    shopitem *ptr = new shopitem[size]; //this ptr is a pointer array of objects 
    shopitem *ptrtem = ptr;
    int p,i;
    float q;

    for ( i = 0; i < size; i++)
    {
       cout<<" enter id and price of item "<<i+1<<endl;
       cin>>p>>q;


       ptr->setdata(p,q); //or (*ptr).getdata(p,q) 

       ptr++;//
    }

    for ( int  j = 0; j < size; j++)
    {
       cout<<"item number:"<<j+1<<endl;
       ptrtem->getdata();
       ptrtem++;
    }
    
    
    
    
    return 0;
}