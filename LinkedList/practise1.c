#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

int main(){
    Node *head = malloc(sizeof(Node));
    Node *p1 = malloc(sizeof(Node));
    Node *p2 = malloc(sizeof(Node));
    Node *p3 = malloc(sizeof(Node));

    head -> next = p1;
    head -> data = 32;
    p1 -> next = p2;
    p1 -> data = 16;
    p2 -> next = p3;
    p2 -> data = 8;
    p3 -> next = NULL;
    p3 -> data = 4;
    
    Node *p = head;
    Node *q = malloc(sizeof(Node));
    q -> data = 12;

    q -> next = p2;
    p1 -> next = q;
    
    while (p != NULL){
        printf("%d\n", p -> data);
        p = p -> next;
    }
    
    
    

    free(p1);
    free(p2);
    free(p3);
    free(head);
}