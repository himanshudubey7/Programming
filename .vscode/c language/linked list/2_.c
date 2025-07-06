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

struct node *insertAtfirst(struct node *head , int data){
    //creation of new node;
struct node *new_node = (struct node*)malloc(sizeof(struct node));
new_node->data = 67;
new_node->next = head;
head = new_node;

return head;

    
}

struct node* insertAtindex(struct node *head , int value , int index){

    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data  = value;
    struct node * p = head;
    int i = 0;
    while(i != index-1 ){
        p = p->next;
        i++;
    }
    new_node->next = p->next;
    p->next = new_node;

return head;
}

struct node * insertAtend(struct node* head , int value){
      struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data  = value;
    struct node * p = head;
    while(p->next !=NULL){
         p = p->next;
    }
    p->next= new_node;
    new_node->next = NULL;

    return head;
}

struct node * insertafter(struct node* prevNode ,struct node* head, int value){
      struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data  = value;
    struct node * p = head;
    
    new_node->next = prevNode->next;
    prevNode->next = new_node;

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





printf("linked list before insertion \n");

linkedlist_traversal(head);
printf("linkded list after insertion\n");
//head = insertAtfirst(head , 56);
//head = insertAtindex(head, 89, 2);
head= insertAtend(head, 46);
linkedlist_traversal(head);

    return 0;
}