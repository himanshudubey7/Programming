#include<bits/stdc++.h>

using namespace std;


int gcd(int a, int b){//a ---> dividend  b --> divisor
    //rem = a%b
    if(a%b == 0)
    return b;
    return gcd(b,a%b);
}

/*
Time complexity of this code is :  O(log(n))
*/
int main(){
    cout<<gcd(12,4)<<endl;
    cout<<gcd(18,12)<<endl;
    cout<<"lcm = "<<12*18/gcd(12,18)<<endl;
    //there is also a in-built function to calculate gcd;
    cout<<__gcd(12,18)<<endl;
    //to calculate the gcd of three numbers :
    // gcd(gcd(a,b),c);

    
    return 0;
}