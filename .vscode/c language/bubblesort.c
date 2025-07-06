#include<stdio.h>

void swap(int* , int*);
int main()
{
    int n;
    printf("enter size of array \n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 //bubble sort starts here


 for(int i=0;i<n-1;i++)
 {
    for(int j = 0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
    }
 }   

printf("sorted array is \n");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}

}
void swap(int* a,int* b)
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp ;


}