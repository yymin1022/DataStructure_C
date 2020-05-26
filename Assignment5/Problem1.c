#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
typedef struct listNode{
    int data;
    listPointer link;
};

listPointer invert(listPointer);

int main(){
    struct listNode* L0 = (listPointer*)malloc(sizeof(listPointer));
    L0 -> link = NULL;

    struct listNode* L1 = (listPointer*)malloc(sizeof(listPointer));
    L1 -> link = L0 -> link;
    L1 -> data = 10;
    L0 -> link = L1;

    struct listNode* L2 = (listPointer*)malloc(sizeof(listPointer));
    L2 -> link = L1 -> link;
    L2 -> data = 20;
    L1 -> link = L2;

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
    }
    return middle;
}