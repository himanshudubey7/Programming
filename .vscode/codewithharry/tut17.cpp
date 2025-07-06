#include<iostream>

using namespace std;
//int product(int a, int b)
//{
   // static int c=0;//executes only once 
    //c=c+1;//next time this function is run , the value of c will be retained
    //return ((a*b)+c);
//}
float moneyRecievd(int currentMoney , float factor=1.04)
{
    return currentMoney*factor;
    
}
int main()
{
    //int a,b;
    //cout<<" the values of a and b "<<endl;
    //cin>>a>>b;
    int money =100000;
    cout<<"if you have "<<money<<"Rs you will get after 1 year = "<<moneyRecievd(money)<<endl;
    cout<<"for VIP if you have "<<money<<"Rs you will get after 1 year = "<<moneyRecievd(money,1.1); 
    //cout<<" product of a and b "<<product(a,b);
    //cout<<" product of a and b "<<product(a,b);
    //cout<<" product of a and b "<<product(a,b);
    //cout<<" product of a and b "<<product(a,b);
    //cout<<" product of a and b "<<product(a,b);
    //cout<<" product of a and b "<<product(a,b);
//
    return 0;
}