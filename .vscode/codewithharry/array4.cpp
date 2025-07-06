#include<iostream>

using namespace std;
int main(){
    
    int marks[]={23, 45,87, 98};
    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;

    //cout<<"these are marks"<<endl;

   // for (int  i = 0; i < 4; i++)
   // {
   //     cout<<"the value of marks "<< i <<" is "<< marks[i]<<endl;
   // }
    
//pointers in arrays
int*p=marks;
cout<<"the value of marks[0] is "<<*p<<endl;
cout<<"the value of marks[1] is "<<*(p+1)<<endl;
cout<<"the value of marks[2] is "<<*(p+2)<<endl;
cout<<"the value of marks[3] is "<<*(p+3)<<endl;



    return 0;
}