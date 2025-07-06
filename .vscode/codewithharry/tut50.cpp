#include<iostream>

using namespace std;
int main(){
    
    // Basic Example of pointer:
    int a =4 ;
    int* ptr = &a;   //ptr will store address i.e the reference of a ;


    cout <<" the value of a is "<< *(ptr)<<endl;  // *(--) ---> means to dereference the address stored 
                                                            // in ptr variable.


    //new keyword ---> used to dynamically allocate the memory 
    int *p = new int (40);  //dynamically allocation of memory
    cout<<" the value at address p is "<< *(p)<<endl;

    int *arr = new int[3];

    arr[0] = 10;
    /*arr[1] = 20;   also it can be written as : */*(arr+1) = 20;
    arr[2] = 30;
    //delete[] arr;
    cout<<" value at arr[0] is "<<arr[0]<<endl;
    cout<<" the value at arr[1] is "<<arr[1]<<endl;
    cout<<" the value at arr[2] is "<<arr[2]<<endl;
    cout<<" the value at arr[3] is "<<arr[3]<<endl;


    //delete keyword: used to free up the dynamically allocated memory
    return 0;
}