#include<iostream>

using namespace std;
class employee
{
    private:
    int a, b, c;
    public:
    int d , e;
    void  setdata(int a1, int b1 , int c1);
    void getdata(){
     cout<<" the value of a  is "<<a<<endl;
     cout<<" the value of  b is "<< b <<endl; 
     cout<<" the value of  c is "<<c  <<endl;
     cout<<" the value of d  is "<< d <<endl;
     cout<<" the value of e is "<<  e <<endl;       
    }

    

};
void employee :: setdata(int a1, int b1 , int c1)
{
    a=a1;
    b=b1;
    c=c1;

}

int main(){
    employee ghosty;
    ghosty.d=34;
    ghosty.e=89;
    ghosty.setdata(1,2,4);
    ghosty.getdata();
    
    return 0;
}