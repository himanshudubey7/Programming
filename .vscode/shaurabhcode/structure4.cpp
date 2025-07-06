#include<iostream>

using namespace std;
struct book
{
    private:
    int bookid;
    char title[20];
    float price;

    public:
    
    void input(void)
    {
        cout<<"enter book id , title and price"<<endl;
        cin>>bookid>>title>>price;
        if(bookid<0)
        bookid= -bookid;
    }
    void display()
    {
        cout<<"the book id is"<<bookid<<endl;
        cout<<"the title is "<<title<<endl;
        cout<<"the price of the book is "<<endl;
    }
    
};
int main(){
    book b1;  
    b1.input();
    b1.display();
   
    
    
    return 0;
}
