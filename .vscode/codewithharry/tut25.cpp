//                              *********** ARRAY OF OBJECTS *********

#include<iostream>

using namespace std;

class employee 
{
    int id;
    int salary ;
    public:
    void setId(void){
        salary =1000;
        cout<<" enter id of the employee "<<endl;
        cin >> id;

    }
  void getId (void){
    cout<<" the id of this employee is "<<id<< " and its salary is "<<salary<<endl;
  }

};
int main(){
    employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    
    return 0;
}