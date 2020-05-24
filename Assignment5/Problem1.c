#include <stdio.h>

typedef struct listNode *listPointer;
typedef struct listNode{
    char data;
    listPointer link;
};

int main(){
    printf("Hello, World!\n");
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