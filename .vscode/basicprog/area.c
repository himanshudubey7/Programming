

#include<stdio.h>
int s(int n)
{
    int sum;
  if ( n==1)
  {
  return 1;  
}
else
{
 sum=n+s(n-1);
}
return sum;
}
int main()

{
int n;
printf("enter the numbers");
scanf("%d",&n);
int add=s(n);
printf("the sum is = %d",add);

return 0;
}