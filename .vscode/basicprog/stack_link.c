#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};






struct node* push (struct node*head)  
{  
    int val;  
    struct node *ptr =(struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("not able to push the element\n");   
    }  
    else   
    {  
        printf("Enter the value\n");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->data = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->data = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed\n");  
          
    }  
    return head;
}  

void pop(struct node*head)  
{  
    printf("\n%d\n", head->data);
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow\n");  
    }  
    else  
    {  
        item = head->data;  
        ptr = head;  
        head = head->next;  
        
        free(ptr);  
        printf("Item popped =\n%d",item);  
          
    }  
    
}  

int main(){
    struct node*head;
    struct node*first = (struct node*)malloc(sizeof(struct node));
    first->data   =10;
    first->next = NULL;
    head = first;

 head =     push(head);
pop(head);





}