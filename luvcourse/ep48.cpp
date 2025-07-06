#include<bits/stdc++.h>

using namespace std;
void print_binary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}
int main(){

    print_binary(9);
    //to check if the ith bit is set or not
    cout<<"enter your number"<<endl;
    int a ;
    cin>>a;
    cout<<"enter the bit you want to check"<<endl;
    int i;
    cin>>i;
    if(a&(1<<i) != 0){
        cout<<"set bit"<<endl;
    }
    else 
    cout<<"not set"<<endl;

    //if you want to set any bit then use 
    print_binary(a|(1<<i));

    //if you want to unset any bit then use
    print_binary(a&(~(1<<3)));

    //if you want to toggle any bit i.e 1 to 0 and 0 to 1; then use
    print_binary(a^(1<<2));
    print_binary(a^(1<<3));


    //count no. of set bits
    int count =0;
    for(int i=31 ;i>=0;--i){
        if(a&(1<<i)!=0){
            ++count;
        }
    }
   //inbuilt function to count setbits;
   cout<<__builtin_popcount(a)<<endl;
   //cout<<__builtin_popcountll((1LL<<35)-1)<<endl;
    
    return 0;
}