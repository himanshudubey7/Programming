/*in c++ we can encapsulate variables as well as functions in a structure which makes it more convinent 
         for the user whereas in c language we were only able to encapusalte the variables in a 
             structure 
             
             
             IN THIS PROGRAM NOTICE THAT ALL THE FUNCTIONS WILL BE CREATED INSIDE THE STRUCTURE */





#include<iostream>

using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
    void input(void)
    {
        cout<<"enter book id , title and price"<<endl;
        cin>>bookid>>title>>price;//no need to write b1.bookid as input method is also a member function
    }
    //WE CAN ALSO CREATE DISPLAY FUNCTION
    void display()
    {
        cout<<"the book id is"<<bookid<<endl;
        cout<<"the title is "<<title<<endl;
        cout<<"the price of the book is "<<endl;
    }
    
};
int main(){
    book b1;  //b1 is kind of object of the structure of book
    b1.input();
    b1.display();
   
    //b1 = input();
    //display(b1);
    
    return 0;
}
