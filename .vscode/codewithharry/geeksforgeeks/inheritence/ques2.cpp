#include<iostream>

using namespace std;


class base
{
    public:

    int arr[10];
};
class b1 : base
{

};
class b2: base{};
class derived: b1, b2{
    
    

};
int main(){
    cout<<sizeof(derived)<<endl;
    return 0;
}