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

int precedence(char ch){
    if(ch == '/' || ch == '*'|| ch=='%'){
        return 2;
    }
    else if(ch =='+' || ch== '-'){
        return 1;
    }
    else{
        return -1;
    }

}
char* infixtopostfix(char* s){
    int len = strlen(s);
    char* postfix = (char*)malloc(sizeof(char) * (len + 2));
    int j = 0;
    for(int i = 0;i<strlen(s);i++){
        char c = s[i];
        if(s[i] == ' '){
            continue;
        }
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9')){
                postfix[j++] = c;
            }
            //if the scanned operator is '('
            //push it into the stack
            else if(c == '('){
                stack[++top] = c;
            }
            else if( c== ')'){
                while(stack[top] != '(' && top>-1){
                    postfix[j++] = pop();

                }
                pop();
            }

            else{
                while(top != -1 && precedence(c)<= precedence(stack[top])){
                    postfix[j++] = pop();

                }
                push(c);

            }
    }

    while(top != -1){

        postfix[j++] = pop();
    }

      postfix[j] = '\0';
    return postfix;

}




int main(){
    char ch[20];
    printf("entet the infix expression :\n");
    gets(ch);
  char *postfix =   infixtopostfix(ch);
   printf("%s\n", postfix);
    free(postfix);

return 0;
}