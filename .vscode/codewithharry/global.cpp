#include<iostream>
using namespace std;
int global=6;

void sum()
{
    int a;
    cout<<global;
}
int main()
{
    int global=9;
    global=78;
    int a=14,b=15;
    float pi=3.14;
    char c='d';
    sum();
    cout<<global;
    return 0;
    
}






















