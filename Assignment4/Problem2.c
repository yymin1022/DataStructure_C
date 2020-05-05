#include <stdio.h>

#define Row 4
#define Col 4
#define A_nonzero_elements 3
#define B_nonzero_elements 4

void EtoA(int*, int*, int*, int);

int AP[(Row*Col)/8] = {129, 8};
int AV[A_nonzero_elements] = {11, 7, -1};

int BP[(Row*Col)/8] = {65, 136};
int BV[B_nonzero_elements] = {5, 2, 4, 1};

int main(){
    int A_a[Row * Col];
    int A_b[Row * Col];

    EtoA(AP, AV, A_a, A_nonzero_elements);

    return 0;
}

void EtoA(int *P, int *V, int *A, int t){
    int lengthP = Row * Col / 2;
    int D[lengthP];
    for(int i = 0; i < lengthP; i++){
        D[i] = *(P + i);
    }
}