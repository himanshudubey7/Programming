/* OOP's---->classes and objects 
         class----> extension of structure(in C)
         structure had limitation 
             ----->members were public 
             ------> no methods 
             classes------> structures + more
             classes can have method and properties
              classes can make few members as private and as well as public
              structures in c++ are typedef 
              you can declare objects along with the clas declaration 
              eg:
              class employee
              {
                    ghost, rohan ,lovish;
              };

              ghost.sallay ---->makes no sense if sallary is private 


              Nesting of member function */



#include<iostream>
#include<string>

using namespace std;
class binary {

    private:
string s;
void chkbin(void);//-----> we can make this data member private if we don't want user to interfere 
                      //     in this function using main function

public:
void read(void );

void once(void);
void display(void);
};


void binary :: read(void){

    cout<<"enter a binary number "<<endl;
    cin>>s;

}

void binary :: chkbin(void){

    for(int i =0; i<s.length() ; i++)
    {

        if(s.at(i)!='0'  &&  s.at(i)!= '1'  )

        {
            cout<<endl;
            cout<<"incorrect binary format "<<endl;
            exit(0);
        }
    }

        
}

void binary:: once(void)
{

    chkbin();  //------> example of nesting of data members 
                  //-----> calling a function inside a functin
 for(int i =0; i<s.length() ; i++)
    {

        if(s.at(i)=='0')
        {
          s.at(i)='1';
        }
       else if(s.at(i)=='1')
       {
       s.at(i)='0';
       }
}
}


void binary :: display(void)
{

cout<<endl;
    cout<<"displaying your number "<<endl;
    cout<<s;
}
int main(){
    

              binary b;  //-----> objects of class binary 
              b.read();
              //b.chkbin();------>you can't call it here because it is private data member
              b.display();
              b.once();
              b.display();

              
    return 0;
}

//this program lets user to convert binary into its once complement 
//the user need not to worry about the checking of the binary format 
//this program does it  for user 
