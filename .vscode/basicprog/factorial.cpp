#include<bits/stdc++.h>

using namespace std;
    int fact;
int factorial(int f)
{
    if(f == 1)
    {
        return 1;
    }
    fact = f*factorial(f-1);
}
int main(){
    int n ;
    printf("enter your number\n");
    scanf("%d",&n);
    
   int ff =  factorial(n);
   printf("your factorial is = %d",ff);
    return 0;
}