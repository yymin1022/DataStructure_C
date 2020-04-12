#include <stdio.h>

void print1(int*, int);

int main() {
    printf("Hello, World!\n");
    return 0;
}

void print1(int *ptr, int rows){
    int i;

    printf("Address Contents\n");

    for(i = 0; i < rows; i++){
        printf("%8u%5d\n", ptr + i, *(ptr + i));
    }

    printf("\n");
}