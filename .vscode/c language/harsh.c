#include <stdio.h>


int main()
{
    int price=0;
    //String st;
    int a ;
    printf("enter the number of subjects you passed\n");
    scanf("%d" ,&a);

    if(a == 1)
    {
        price = 30;
    printf("congo! you won \n");
    printf("%d",price);
    }

    else if(a ==2)
    {
        price = 60;
         printf("congo! you won\n ");
         printf("%d",price);
    }
    else
    {
        printf("you didn't got the price\n");
    }

   
    return 0;
}

