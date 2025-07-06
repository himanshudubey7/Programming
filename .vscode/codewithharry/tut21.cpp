#include<iostream>

using namespace std;
class student
{
    string name;
    
    public:
    void setname(string s)
    {
        name = s;
    }
    int age;
    bool gender;
    void getname(){
        cout<<name<<endl;
    }

void printInfo(){
    cout<<" Name = ";
    cout<<name<<endl;
    cout<<" age = ";
    cout<<age<<endl;
    cout<<" Gender = ";
    cout<<gender<<endl;

    

} 


};

int main(){
    student arr[3];
    for(int i= 0; i<3;i++)
    {
        string s;
       
        
        cout<<"name = ";
         cin>>s;
        arr[i].setname(s);
        cout<<"age = ";
        cin>>arr[i].age;
        cout<<"gender = ";
        cin>>arr[i].gender;

    }
    for (int i=0;i<3;i++)
    {
        arr[i].printInfo();
    }
    return 0;
}