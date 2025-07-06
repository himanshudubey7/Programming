#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* next;
};

void linkedlist_traversal(struct node* ptr){
    while(ptr!= NULL){
    printf("%d\n", ptr-> data);
    
    ptr = ptr->next;


    }
}

struct node* sethead(struct node *head ){


 struct node* secondlast = (struct node*)malloc(sizeof(struct node));
    secondlast = head;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    while(secondlast->next->next != NULL){
        secondlast = secondlast->next;

    }
    newnode->data = secondlast->next->data;
    free(secondlast->next);
    secondlast->next = NULL;
    newnode->next = head;
    head = newnode;

    return head;
}
int main(){
    struct node *head;
     struct node *second;
      struct node *third;

      //allocate memory for nodes in the linked list in the heap
    head = (struct node* )malloc(sizeof(struct node));
     second = (struct node* )malloc(sizeof(struct node));
      third = (struct node* )malloc(sizeof(struct node));

//link first and second nodes
      head->data = 7;
      head->next = second;
// link second and third nodes

second->data = 8;
second->next= third ;

third->data = 11;
third->next = NULL;// terminate the list at third node
 struct node* newnode = (struct node*)malloc(sizeof(struct node));
   printf("before deletion\n"); 
linkedlist_traversal(head);
//newnode = deletelast(head);
head = sethead(head);
printf("after deletion\n");
linkedlist_traversal(head);


    return 0;
}