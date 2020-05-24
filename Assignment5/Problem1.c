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