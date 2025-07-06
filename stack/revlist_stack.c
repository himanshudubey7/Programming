#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 30
int stack[10];
int top = -1;
void push(char x){
    if(top == max-1){
        printf("stack is full\n");
    }
    else{
        top++;
        stack[top] = x;
    }
}
char pop(){
    char temp;
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
         temp = stack[top];
        top--;
    }
    return temp;
}
int peek(){
     int temp;
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
         temp = stack[top];
       
    }
    return temp;
}
int main(){
    char s[] = "Avinash";

    int n;
n= strlen(s);
char str[n];
    for(int i = 0;i<n;i++){
        char ch;
      ch = s[i];
        push(ch);
    }
for(int i = 0;i<n;i++){
    char chr;
    chr = pop();
 printf("%c",chr);
}

return 0;
}