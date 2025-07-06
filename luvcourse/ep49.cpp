#include<bits/stdc++.h>

using namespace std;


void print_binary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}
int main(){
    for(int i =0;i<8;i++)
    {

    //to check if the number is even or odd using bit manipulation
    // do and operation of number with 1;
        print_binary(i);
        if(i&1){
            cout<<"odd"<<endl;
        }
        else
        cout<<"even"<<endl;

    }

    //to divide a number  by 2  then do rightshift by 1
    //to multiply a number by 2 then do leftshift by 1;
    int n =5 ;//0000101
    cout<<(n>>1)<<endl;//000010
    cout<<(n<<1)<<endl;//001010



/*
How to convert a character into upper case to lower case and vise versa.
*/
for(char ch= 'A';ch<='E';++ch){
    cout<< ch <<endl;
    print_binary(ch);
}

for(char ch = 'a';ch <='e';++ch){
    cout<<ch<<endl;
    print_binary(ch);
}

char ch = 'A';
char a  = ch|(1<<5);
cout<<a<<endl;
cout<<char(a&(~(1<<5)))<<endl;

//upper case to lowercase
char b = 'B';
char B = (b|' ');
cout<<B<<endl;
cout<<char(B&'_')<<endl;;




    return 0;
}