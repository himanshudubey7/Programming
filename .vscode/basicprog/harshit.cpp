#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b){
    
    if(a%b == 0)
    return b;
    return gcd(b,a%b);
}

int main(){
    int a, b;
    cout<<"enter the fraction"<<endl;
    cout<<"enter the numreator"<<endl;
    cin>>a;
    cout<<"enter the denominator"<<endl;
    cin>>b;
    //to calculate the gcd using euclids algorithm :
    int gcd_calc = gcd(a,b);
    int num = a/gcd_calc;
    int deno = b/gcd_calc;
    cout<<"your simplest fraction is "<<endl;
    cout<<num<<"/"<<deno<<endl;

    return 0;
}