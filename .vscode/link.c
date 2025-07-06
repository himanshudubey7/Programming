//author: Ghostyy :D
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node  *create_List(struct node *head){
    
    return head;
}
void display(struct node *head){
    struct node *ptr = head;
    while(ptr->next != NULL){
        printf(" --> %d ", ptr->data);
    }
}

// struct node *atbeg(struct node *head){
//     struct node *new_node;
//     new_node =(struct node*) malloc(sizeof(struct node));
//     printf("Enter element for insertion at beginning:");
// scanf("%d" ,new_node->data);
// new_node->next = head;
// head = new_node;
// }
int main(){
    struct node *head  = NULL;
    int item;
    struct node *k;


    char ch = 'Y';
    printf("enter the value of head node\n");
    scanf("%d", &item);


    k = (struct node *) malloc(sizeof(struct node));
    k ->data = item;
    k->next = NULL;
    head = k;

    struct node *p = head;
    char chr;
    while(ch == 'Y')
    {
         printf("enter the value of next node\n");
    scanf("%d", &item);
    k = (struct node *) malloc(sizeof(struct node));
    k ->data = item;
    k->next = NULL;
    p->next = k;
    p = p->next;
    printf("\nwant to enter more nodes?\t Y/N \n");
    scanf ("%c",&chr );
    ch = chr;

    }

    
    
    return 0;
}