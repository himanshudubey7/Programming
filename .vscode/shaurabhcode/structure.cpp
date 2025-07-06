#include<iostream>
#include<string>
#include<string.h>
#include<cstring>


using namespace std;
//when defined outside any function then it is called the global declration
struct book
{
    int bookid;
    char title[20];
    float price;
};

book b2;// it will also consume 28 byte memory but it is a global varible.

int main(){
   // int x=5; //atomic value
    //int a[10];//a method to store or create a group of varibles of similar type.
    book b1 ={100,"my name is himanshu",450.0};//declartion and initillization

     //cretion of varible of book data type and it will consume 28 byte memory in which there:
              // int bookid-> 4 byte
              //char title ->20 byte
              //float price-> 4 byte

     book b3; //it will also consume 28 byte memory
     b3.bookid =101;
     strcpy(b3.title,"my name is himanshu");
     b3.price=300.0;
     b2 = b3;  //we can copy whole data of b3 in b2;





    return 0;
}