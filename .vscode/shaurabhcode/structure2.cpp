#include<iostream>

using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
book input()
{
    //here b1 has no importance so we have to create a new variable
    book b;
    cout<<"enter bookid, title and price of book"<<endl;
    cin>>b.bookid>>b.title>>b.price;
    return (b);//here we are returning the whole data in b;
}
void display(book b)

{
    cout<<"the book id :"<<b.bookid<<endl;
    cout<<"the title is :"<<b.title<<endl;
    cout<<"the price of the book is :"<<b.price<<endl;
}



int main(){
    book b1;
    //cout<<"enter bookid, title and price of book"<<endl;
    //cin>>b1.bookid>>b1.title>>b1.price;
    b1 = input();
    display(b1);
    
    return 0;
}
