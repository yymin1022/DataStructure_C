#include <stdio.h>
#include <math.h>

#define Row 4
#define Col 4
#define A_nonzero_elements 3
#define B_nonzero_elements 4

int binTOdec(int*, int, int);
void decTObin(int, int*);
void EtoA(int*, int*, int*, int);
void printResult(int*);
void sum(int*, int*, int*);

int AP[(Row*Col)/8] = {129, 8};
int AV[A_nonzero_elements] = {11, 7, -1};

int BP[(Row*Col)/8] = {65, 136};
int BV[B_nonzero_elements] = {5, 2, 4, 1};

int main(){
    int A_a[Row * Col];
    int A_b[Row * Col];
    int A_result[Row * Col];

    for(int i = 0; i < Row * Col; i++){
        A_a[i] = 0;
        A_b[i] = 0;
        A_result[i] = 0;
    }

//    EtoA(AP, AV, A_a, A_nonzero_elements);
//    EtoA(BP, BV, A_b, B_nonzero_elements);
//
//    sum(A_a, A_b, A_result);
//
//    printResult(A_result);

    return 0;
}

int binTOdec(int *bin, int from, int to){
    int dec = 0;

    for(int i = to; i >= from; i--){
        if(*(bin + i - from) == 1){
            dec += pow(2, 7 - i + from);
        }
    }

    return dec;
}

void decTObin(int dec, int *bin){
    int i = 0;
    while(dec != 0){
        *(bin - i + 7) = dec % 2;
        dec = dec / 2;

        i++;
    }
}

void EtoA(int *P, int *V, int *A, int t){
    int count = 0;
    int lengthP = Row * Col / 8;
    int D[lengthP][8];

    for(int i = 0; i < lengthP; i++){
        for(int j = 0; j < 8; j++){
            D[i][j] = 0;
        }
    }

    for(int i = 0; i < lengthP; i++){
        decTObin(P[i], D[i]);
    }

    for(int i = 0; i < lengthP; i++){
        for(int j = 0; j < 8; j++){
            if(D[i][j] == 1){
                *(A + i * 8 + j) = *(V + count);
                count++;
            }
        }
    }
}

void printResult(int *result){
    int DP[Row * Col / 8];
    int DV[Row * Col];
    int t = 0;

    for(int i = 0; i < Row * Col; i++){
        if(result[i] != 0){
            DV[t] = result[i];
            t++;
        }
    }

    for(int i = 0; i < Row * Col / 8; i++){
        DP[i] = binTOdec(result, i * 8, (i + 1) * 8 - 1);
    }
}

void sum(int* A, int* B, int* C){
    for(int i = 0; i < Row * Col; i++){
        *(C + i) = *(A + i) + *(B + i);
    }
}