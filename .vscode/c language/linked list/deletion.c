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
struct node* delete_startfirst(struct node* head){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr= head;
    if(head == NULL){
        return ;
    }
    else{
        head = head->next;
        free(ptr);
    }
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

printf("list before deletion\n");   
linkedlist_traversal(head);

head = delete_startfirst(head);
printf("list after the deletion\n");
linkedlist_traversal(head);


    return 0;
}