#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int year = 0 ;
   while(a<=b)
   {
    year++;
    a = 3*a;
    b=2*b;
   }
   cout<<year;
    return 0;
}