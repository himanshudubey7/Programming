//DESTRUCTORS ----> If you want to destroy an object then you will also want that the memory associated 
                     //with the object should also be freed. 

                     //A destructor is called to de-allocate and free memory.
                       //Destructor never takes an arguement nor does it return any value


#include<iostream>

using namespace std;
class num{
    int count = 0;

    public:
    num(){
        count++;
        cout<<" this is the time when constructor is called for object number"<<count<<endl;

    }
    ~num(){
        cout<<" this is the time when my desctructor is called for object number "<<count<<endl;
        count--;
    }



};



int main(){
    cout<<" we are in our main function"<<endl;
    cout<<"Creating first object n1 "<<endl;
    num n1;
{
    cout<<" entering this block "<<endl;
    cout<<" Creating two more objects "<<endl;
    num n2 , n3;
    cout<<" exiting this block "<<endl;
}

cout<<" back to main function "<<endl;
    return 0;
}