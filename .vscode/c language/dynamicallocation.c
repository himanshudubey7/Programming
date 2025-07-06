#include<stdio.h>
#include<stdlib.h>
int main()
{
  

// use of realloc()

int *ptr;
    printf("enter the size of array \n");
    int n;
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr == NULL)
    {
        printf("no memory allocate\n");
        return 0;
    }
    else
    {
    printf("the address of block = %p\n",ptr);
    printf("enter elements in your array\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n");
     for(int i =0;i<n;i++)
    {
        printf("the %d element is = %d\n",(i+1),(ptr[i]));
    }

  
    int *p;
    printf("enter the new size of array\n");
    int m ;
    scanf("%d",&m);
    p = realloc(ptr,m*sizeof(int));
    printf("new addresss of block = %p\n",p);
    printf("enter new elements\n");
    for(int i =n;i<m;i++)
    {
        scanf("%d",&p[i]);
    }

      for(int i =0;i<m;i++)
    {
        printf("the %d element is = %d\n",(i+1),(p[i]));
    }
    }
    return 0;
    
}