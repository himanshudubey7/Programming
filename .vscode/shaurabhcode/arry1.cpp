#include<iostream>
#include<array>

using namespace std;
int main(){
    array<int, 4>data_array = {11,22, 33,44};//initilization while declaration
    //front() and back () method 
    cout<<"the use of front ()"<<data_array.front()<<endl;
    cout<<"the use of back ()"<<data_array.back()<<endl;
    

    
    return 0;
}