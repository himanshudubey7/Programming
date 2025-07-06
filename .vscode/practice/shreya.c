#include<stdio.h>
#include<stdlib.h>
struct stack{
   int size;
  int  top;
   int*arr;
};
int isFull(struct stack*ptr)
{
    if (ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
};
int isEmpty(struct stack*ptr) {
  if(ptr->top==-1){
    return 1;
  }
  else 
  {
    return 0;
  }
  };
  void push(struct stack* ptr , int val){
    if(isFull(ptr)){
      printf("stack overflow %d to the stack\n",val);
    }
    else{
      ptr->top++;
      ptr->arr[ptr->top]=val;
    }
  }
int pop(struct stack* ptr){
  if(isEmpty(ptr)){
      printf("stack underflow %d to the stack\n");
      return-1;
    }
    else{
      int val = ptr->arr[ptr->top];
     ptr-> top--;
    return val;
    }
}
int peek(struct stack* sp,int i){
    int arrayInd= sp->top-i;
    if (arrayInd <0){
        printf("not a valid position\n");
        return -1;
    }
    else{
      return sp->arr[arrayInd];
     
    }

}

int main(){
struct stack*sp; //structure pointer store value of any structure
sp=(struct stack*) malloc(sizeof(struct stack));
sp->size=10;
sp->top=-1; //represent stack is empty means no element present in stack
sp->arr=(int*)malloc(sp->size*sizeof(int));
// printf("stack has been created successfully \n");

// printf("before pushing, Full %d\n", isFull(sp));
// printf("before pushing, Empty %d\n", isEmpty(sp));
push(sp, 34);
push(sp, 89);
push(sp, 98);
push(sp, 23);
push(sp, 22);
push(sp, 45);
push(sp, 66);
push(sp, 76);
push(sp, 36);
push(sp, 6);//10 value is pushed
push(sp, 46);
// printf("popped %d from the stack \n",pop(sp));
// printf("after pushing, Full %d\n", isFull(sp));
// printf("after pushing, Empty %d\n", isEmpty(sp));
for(int j=0;j<sp->top+1;j++){
printf("the value is  at position %d is%d\n",j,peek(sp,j));
}
    return 0;
}