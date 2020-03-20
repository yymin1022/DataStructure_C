#include <stdio.h>
#include <math.h>

#define MAX_SIZE 5
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

void sort(int [], int); /* Selection Sort */

void main(void){
    int i, n = 5;
    int list[MAX_SIZE] = {2, 7, 9, 3, 1};

    for(i = 0; i < n; i++){
        printf("%d ", list[i]);
    }

    sort(list, n);

    printf("\nSorted Array : \n");
    for(i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    printf("\n");
}

void sort(int list[], int n){
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(list[j] < list[min]){
                min = j;
            }
        }
        SWAP(list[i], list[min], temp);
    }
}
