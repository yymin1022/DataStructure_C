#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
typedef struct listNode{
    int data;
    listPointer link;
};

listPointer invert(listPointer);
void printList(listPointer);

int main(){
    /* Inverting of Linked List which has 2 nodes */
    printf("Inverting of Linked List which has 2 nodes\n");
    struct listNode* L1 = (listPointer*)malloc(sizeof(listPointer));
    L1 -> link = NULL;
    L1 -> data = 10;

    struct listNode* L2 = (listPointer*)malloc(sizeof(listPointer));
    L2 -> link = L1 -> link;
    L2 -> data = 20;
    L1 -> link = L2;

    printf("Linked List before Invert\n");
    printList(L1);

    struct listNode* invertList1 = invert(L1);

    printf("Linked List after Invert\n");
    printList(invertList1);

    /* Inverting of Linked List which has 1 nodes */
    printf("\nInverting of Linked List which has 1 nodes\n");
    struct listNode* L3 = (listPointer*)malloc(sizeof(listPointer));
    L3 -> link = NULL;
    L3 -> data = 10;

    printf("Linked List before Invert\n");
    printList(L3);

    struct listNode* invertList2 = invert(L3);

    printf("Linked List after Invert\n");
    printList(invertList2);

    /* Inverting of Linked List which has Empty nodes */
    printf("\nInverting of Linked List which has Empty nodes\n");
    struct listNode* L4 = (listPointer*)malloc(sizeof(listPointer));
    L4 -> link = NULL;

    printf("Linked List before Invert\n");
    printList(L4);

    struct listNode* invertList3 = invert(L4);

    printf("Linked List after Invert\n");
    printList(invertList3);

    return 0;
}

listPointer invert(listPointer lead){
    listPointer middle, trail;
    middle = NULL;

    while(lead){
        trail = middle;
        middle = lead;
        lead = lead -> link;
        middle -> link = trail;

        printf("Current State - Trail : %p, Middle : %p, Lead : %p\n", trail, middle, lead);
    }

    return middle;
}

void printList(listPointer pointer){
    while(pointer != NULL){
        printf("Address : %p, Data : %d, Link : %p\n", pointer, pointer -> data, pointer->link);
        pointer = pointer -> link;
    }
}