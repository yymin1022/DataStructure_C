#include <stdio.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

int find_min(int[], int, int);
void sort(int [], int); /* Selection Sort */

int main(){
    int i, n;
    int list[MAX_SIZE];

    printf("Enter the number of numbers to generate : ");
    scanf("%d", &n);
    if(n < 1 || n > MAX_SIZE){
        fprintf(stderr, "Improper value of n\n");
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

    return 0;
}

int find_min(int list[], int i, int n){// assuming 0 <= i < n
     int j, min;

     min = i;

     for (j = i+1; j < n; j++)
         if (list[j] < list[min]) min = j;
     return min;
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