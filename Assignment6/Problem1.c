#include <stdio.h>

#define SWAP(x, y, temp) {temp = x; x = y; y = temp;}

typedef struct{
    int key;
}element;

void adjust(element[], int, int);
void heapSort(element[], int);
void printArray(element[]);

int main(){
    int num[] = {0, 2434, 3423, 4656, 3456, 3454, 2345, 9374, 7283, 3948, 5594, 3959};
    element a[12];

    for(int i = 0; i < 12; i++){
        a[i].key = num[i];
    }

    heapSort(a, 11);

    printArray(a);
    return 0;
}

void adjust(element a[], int root, int n){
    int child, rootKey;
    element temp = a[root];
    rootKey = a[root].key;
    child = root * 2;

    while(child <= n){
        if((child < n) && (a[child].key < a[child + 1].key)){
            child++;
        }

        if(rootKey > a[child].key){
            break;
        }else{
            a[child / 2] = a[child];
            child *= 2;
        }
    }
    a[child / 2] = temp;
}

void heapSort(element a[], int n){
    int i, j;
    element temp;

    for(i = n / 2; i > 0; i--){
        adjust(a, i, n);
    }

    for(i = n - 1; i > 0; i--){
        SWAP(a[1], a[i + 1], temp);
        adjust(a, 1, i);
    }
}

void printArray(element a[]){
    printf("element a[] is [%d", a[1].key);
    for(int i = 2; i < 12; i++){
        printf(", %d", a[i].key);
    }
    printf("]");
}