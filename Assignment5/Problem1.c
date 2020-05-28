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
    struct listNode* L2_0 = (listPointer*)malloc(sizeof(listPointer));
    L2_0 -> link = NULL;
    L2_0 -> data = 10;

    struct listNode* L2_1 = (listPointer*)malloc(sizeof(listPointer));
    L2_1 -> link = L2_0 -> link;
    L2_1 -> data = 20;
    L2_0 -> link = L2_1;

    printf("Linked List before Invert\n");
    printList(L2_0);

    struct listNode* invertL2 = invert(L2_0);

    printf("Linked List after Invert\n");
    printList(invertL2);

    /* Inverting of Linked List which has 1 node */
    printf("\nInverting of Linked List which has 1 node\n");
    struct listNode* L1 = (listPointer*)malloc(sizeof(listPointer));
    L1 -> link = NULL;
    L1 -> data = 10;

    printf("Linked List before Invert\n");
    printList(L1);

    struct listNode* invertL1 = invert(L1);

    printf("Linked List after Invert\n");
    printList(invertL1);

    /* Inverting of Linked List which has Empty node */
    printf("\nInverting of Linked List which has Empty node\n");
    struct listNode* L0 = (listPointer*)malloc(sizeof(listPointer));
    L0 -> link = NULL;

    printf("Linked List before Invert\n");
    printList(L0);

    struct listNode* invertL0 = invert(L0);

    printf("Linked List after Invert\n");
    printList(invertL0);

    return 0;
}

listPointer invert(listPointer lead){
    int invertCount = 0;

    listPointer middle, trail;
    middle = NULL;

    printf("\nStart Inverting\n");

    while(lead){
        trail = middle;
        middle = lead;
        lead = lead -> link;
        middle -> link = trail;
        
        printf("Current Process : %d\n", invertCount);
        if(trail){
            printf(" - Trail : %p, Trail Data : %d, Trail Link : %p\n", trail, trail->data, trail->link);
        }else{
            printf(" - Trail : Null\n");
        }

        if(middle){
            printf(" - Middle : %p, Middle Data : %d, Middle Link : %p\n", middle, middle->data, middle->link);
        }else{
            printf(" - Middle : Null\n");
        }

        if(lead){
            printf(" - Lead : %p, Lead Data : %d, Lead Link : %p\n", lead, lead->data, lead->link);
        }else{
            printf(" - Lead : Null\n");
        }

        invertCount++;
    }

    printf("\nFinish Inverting\n\n");

    return middle;
}

void printList(listPointer pointer){
    while(pointer){
        printf("Address : %p, Data : %d, Link : %p\n", pointer, pointer -> data, pointer->link);
        pointer = pointer -> link;
    }
}