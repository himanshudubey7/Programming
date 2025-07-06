/*
SYNTAX 1:
function prototype
void helloworld();

SYNTAX 2;
 Function defination 
 void helloworld(){
    printf("hello");

 }

 SYNTAX 3;
  int main(){
    helloworld();
    return 0;
  }

*/



#include<stdio.h>

void helloworld();//function declation or function prototype

int main()
{
    helloworld();//function call
    helloworld();
    helloworld(); 

    
return 0;
}

void helloworld(){//function defination 
    printf("hello world\n");
}