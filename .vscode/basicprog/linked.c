#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;

} *first = NULL;


void create(int A[], int n) {
    int i;
    struct Node* t, * last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node* p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void MoveLastToFirst() {
    if (first == NULL || first->next == NULL) {
        return; 
    }

    struct Node* last =first;
    struct Node* secondLast = first;

    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    secondLast->next = NULL;
    last->next =first;
    first = last;
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter data: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    create(A, n);
    printf("Linked list elements: ");
    Display(first);

    MoveLastToFirst();
    
    printf("\n elements after moving last to first: ");
    Display(first);

    return 0;
}