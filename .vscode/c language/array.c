/*
collection of similar data types stored at contegious memory blocks ;

int marks[3];
char name[5];

INPUT AND OUTPUT:
scanf("%d",marks[0])

*/


#include<stdio.h>

int main()
{
       int marks[3];
       printf("enter marks of subjects \n");
       for(int i =0;i<3;++i)
       {
        scanf("%d",&marks[i]);
       }
    printf(" the entered marks are as follows\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", marks[i]);
    }
    

    
return 0;
}