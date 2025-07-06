/*IN THIS PROGRAM WE WILL CREATE A CLASS TEMPLATE OR WE CAN SAY A GENERIC CLASS */
#include<iostream>

using namespace std;
template<class x> class arraylist 
{
    private:
    struct controlblock
    {
        int capacity;
        int* arr_ptr;//INTEGER POINTER WHICH WILL POINT TO ARRAY VARIABLE

    };
    controlblock* s;//CREATING A POINTER VARIABLE  WHICH POINTS FOR THE STRUCTURE 
    public:
    arraylist(int capacity)//PRAMATERIZED CONSTRUCTOR
    {
        s=new controlblock;//NOW THE STRUCTURE IS CREATED AND ADDRESS IS STROED IN THE VARIBLE s.
        s->capacity=capacity; //ASSIGHNING LOCAL VARIABLE VALUE TO GLOBAL CAPACITY
        s->arr_ptr=new x[s->capacity];
    }
    void addelement(int index , x data)//FUNCTION TO ADD ELEMENT IN THE ARRAY
    {
        if(index >=0&&index<=s->capacity-1)
        {
            s->arr_ptr[index]=data;
        }
        else
        cout<<"Array index is not valid"<<endl;
    }
    void viewelement(int index , int &data)//TO VIWE ELEMENT OF THE ARRAY
    {
        if(index>=0&&index<=s->capacity-1)
        data=s->arr_ptr[index];
        else
        cout<<"array index is not valid"<<endl;
    }
    void viewlist()//   FUNCTION TO VIEW WHOLE ARRAY
    {
        int i;
        for (int i = 0; i < s->capacity; i++)
        {
            cout<<" "<<s->arr_ptr[i]<<endl;
        }
        
    }
};

int main(){
    int data;
    arraylist <int> list1(4);
    list1.addelement(0,32);
    list1.addelement(1,12);
    list1.addelement(2,48);
    list1.addelement(3,55);
    list1.viewelement(0,data);
    list1.viewlist();
    cout<<"value in the array is "<<data<<endl;
    
    return 0;
}