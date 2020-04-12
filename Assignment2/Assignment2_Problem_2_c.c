#include <stdio.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

int rfind_min(int[], int, int);
int *rsort(int[], int); /* Selection Sort */

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

    rsort(list, n);

    printf("\n Sorted Array : \n");
    for(i = 0; i < n; i++){
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}

int rfind_min(int list[], int i, int n){// assuming 0 <= i < n
    int min;

    if(i == n - 1){
        min = i;
    }else {
        min = rfind_min(list, i + 1, n);

        if(list[i] < list[min]){
            min = i;
        }
    }

    return min;
}

int *rsort(int list[], int n){
    int min, temp;

    if(n == 1){
        return list;
    }else{
        min = rfind_min(list, 0, n);
        SWAP(list[0], list[min], temp);
        return rsort(list + 1, n - 1);
    }
}
