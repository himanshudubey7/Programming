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
void reverse (char *exp)
{

  int size = strlen (exp);
  int j = size, i = 0;
  char temp[size];

  temp[j--] = '\0';
  while (exp[i] != '\0')
    {
      temp[j] = exp[i];
      j--;
      i++;
    }
  strcpy (exp , temp);
}
void brackets (char *exp)
{
  int i = 0;
  while (exp[i] != '\0')
    {
      if (exp[i] == '(')
	exp[i] = ')';
      else if (exp[i] == ')')
	exp[i] = '(';
      i++;
    }
}

int precedence(char ch){
    if(ch == '/' || ch == '*'){
        return 2;
    }
    else if(ch =='+' || ch== '-'){
        return 1;
    }
    else{
        return -1;
    }

}
void infixtopostfix(char* exp){
    int len = strlen(exp);
    char* postfix = (char*)malloc(sizeof(char) * (len + 2));
    int j = 0;
    for(int i = 0;i<strlen(exp);i++){
        char c = exp[i];
        if(exp[i] == ' '){
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
              char p =   pop();
            }

            else{
                while(top != -1 && precedence(c)< precedence(stack[top])){
                    postfix[j++] = pop();

                }
                push(c);

            }
    }

    while(top != -1){

        postfix[j++] = pop();
    }

      postfix[j] = '\0';
strcpy(exp , postfix);

}

char * infixtoprefix(char *exp){
      int size = strlen (exp);

  // reverse string
  reverse (exp);
  //change brackets
  brackets (exp);
  //get postfix
  infixtopostfix (exp);
  // reverse string again
  reverse (exp);

  return exp;
}


int main(){
    char ch[20];
    printf("entet the infix expression :\n");
    gets(ch);
  
  printf("the prefix expressiion :\n");
  printf("%s",infixtoprefix(ch));

return 0;
}