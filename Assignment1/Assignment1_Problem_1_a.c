#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

void sort(int [], int);

void main(void){
    int i, n;
    int list[MAX_SIZE];

    printf("Enter the number of numbers to generate : ");
    scanf("%d", &n);
    if(n < 1 || n > MAX_SIZE){
        fprintf(stderr, "Improper value of n\n");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < n; i++){
        printf("%d ", list[i]);
    }

    sort(list, n);

    printf("\n Sorted Array : \n");
    for(i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    printf("\n");
}

void sort(int list[], int n){
    int i, j, max, temp;

    for(i = 0; i < n - 1; i++){
        max = i;
        for(j = i + 1; j < n; j++){
            if(list[j] > list[max]){
                max = j;
            }
        }
        SWAP(list[i], list[max], temp);
    }
}
