#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
typedef struct listNode{
    int data;
    listPointer link;
};

listPointer cinvert(listPointer);
void printList(listPointer);

int main() {
    struct listNode* CL2_0 = (listPointer*)malloc(sizeof(listPointer));
    CL2_0 -> link = CL2_0;
    CL2_0 -> data = 10;

    struct listNode* CL2_1 = (listPointer*)malloc(sizeof(listPointer));
    CL2_1 -> link = CL2_0 -> link;
    CL2_1 -> data = 20;
    CL2_0 -> link = CL2_1;

    printf("Circular Linked List before Invert\n");
    printList(CL2_0);

    struct listNode* invertCL2 = cinvert(CL2_0);

    printf("Circular Linked List after Invert");
    printList(CL2_0);

    return 0;
}

listPointer cinvert(listPointer lead){
    listPointer middle, trail;
    middle = NULL;

    while(lead){
        trail = middle;
        middle = lead;
        lead = lead -> link;
        middle -> link = trail;
    }

    return middle;
}

void printList(listPointer pointer){
    while(pointer != NULL){
        printf("Address : %p, Data : %d, Link : %p\n", pointer, pointer -> data, pointer->link);
        pointer = pointer -> link;
    }
}