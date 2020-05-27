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
    printf("Hello, World!\n");
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