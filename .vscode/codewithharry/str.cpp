#include<iostream>

using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} pe;


 union money
{
    /* data */
    int rice;
    char car;
    float pounds;
}; 








int main(){
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    
    //union money m1;
    //m1.rice=34;
    //m1.car='c';
    //cout<<m1.rice<<endl;

    //**************************
    //pe ghosty;
    //struct employee divyansh;
    //struct employee rohan;
    //ghosty.eId =1;
    //ghosty.favChar='c';
    //ghosty.salary=1200000;
    //cout<<"the value is "<<ghosty.eId<<endl;
    //cout<<"the value is "<<ghosty.favChar<<endl;
    //cout<<"the value is "<<ghosty.salary<<endl;
    
    return 0;
}