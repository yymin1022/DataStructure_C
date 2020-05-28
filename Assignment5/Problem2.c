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

    printf("Circular Linked List after Invert\n");
    printList(invertCL2);

    return 0;
}

listPointer cinvert(listPointer lead){
    listPointer middle, trail;
    listPointer startPoint = lead;
    middle = lead->link;

    int count = 0;

    while(lead != startPoint || count == 0){
        trail = middle;
        middle = lead;
        lead = lead -> link;
        middle -> link = trail;

        count = 1;
    }

    return middle;
}

void printList(listPointer pointer){
    listPointer startPoint = pointer;

    printf("Address : %p, Data : %d, Link : %p\n", pointer, pointer -> data, pointer->link);
    pointer = pointer -> link;

    while(pointer != startPoint){
        printf("Address : %p, Data : %d, Link : %p\n", pointer, pointer -> data, pointer->link);
        pointer = pointer -> link;
    }
}