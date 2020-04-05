#include <stdio.h>

#define COMPARE(x, y) (((x) < (y)) ? -1: ((x) == (y))? 0: 1)
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

typedef struct{
    int coef;
    int exp;
} polynomial;

int binSearch(polynomial poly[], int start, int end, int searchNum);
void sortPolynomial(polynomial poly[], int length);

int main(){
    int A_coef[3] = {3, 4, 1}; int A_exp[3] = {1, 2, 0};
    int B_coef[3] = {1, 3, 2}; int B_exp[3] = {2, 1, 0};

    polynomial A[3];
    polynomial B[3];
    polynomial C[9];

    for(int i = 0; i < 3; i++){
        A[i].coef = A_coef[i];
        A[i].exp = A_exp[i];

        B[i].coef = B_coef[i];
        B[i].exp = B_exp[i];
    }

    sortPolynomial(A, 3);
    sortPolynomial(B, 3);

    for(int i = 0; i < 9; i++){
        C[i].coef = 0;
        C[i].exp = 0;
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int indexFromC = binSearch(C, 0, 8, A[i].exp + B[j].exp);

            printf("i : %d, j : %d, what : %d, index : %d\n", i, j, A[i].exp + B[j].exp, indexFromC);

            if(indexFromC != -1){
                C[indexFromC].coef += A[i].coef * B[j].coef;
            }else{
                for(int k = 0; k < 9; k++){
                    if(C[k].coef == 0){
                        C[k].coef += A[i].coef * B[j].coef;
                        C[k].exp = A[i].exp + B[j].exp;
                        break;
                    }
                }
            }
            sortPolynomial(C, 9);
        }
    }

    for(int i = 0; i < 9; i++){
        int curCoef = C[i].coef;
        int curExp = C[i].exp;

        if(curCoef != 0){
            if(i == 0){
                printf("C(x) = %dx%d ", curCoef, curExp);
            }else {
                printf(" + %dx%d ", curCoef, curExp);
            }
        }
    }

    return 0;
}

int binSearch(polynomial poly[], int start, int end, int searchNum) {
    int middle;
    
    while (start <= end) {
        middle = (start + end) / 2;

        switch (COMPARE(poly[middle].exp, searchNum)) {
            case -1:
                start = middle + 1;
                break;
            case 0:
                return middle;
            case 1:
                end = middle - 1;
        }
    }
    return -1;
}

void sortPolynomial(polynomial poly[], int length){
    int i, j, max, temp;

    for(i = 0; i < length; i++){
        max = i;
        for(j = i + 1; j < length; j++){
            if(poly[j].exp > poly[max].exp){
                max = j;
            }
        }
        SWAP(poly[i].exp, poly[max].exp, temp);
        SWAP(poly[i].coef, poly[max].coef, temp);
    }
}