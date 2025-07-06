#include<stdio.h>
#include<stdlib.h>
#define max 30
 int stack[10];
    int top = -1;
void push(int stack[] ,int item ){
    if(top== max){
        printf("overflow\n");
    }
    else{
        top++;
        stack[top] = item;
    }
}
int pop(int stack[]){
    if(top == -1){
        return printF("underflow\n");
    }
    else{
        int x = stack[top];
        top--;
        printf("the poped value is: %d\n",x);
    }

}

int main(){
    int n;
    printf("Enter the number of elements you want to enter in a stack:\n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
printf("enter the item \n");
    int item;
    scanf("%d",&item);
    push(stack, item);
    }

    for(int i = 0;i<n;i++){
        printf("%d\n", stack[i]);
    }
   
    
    return 0;
}