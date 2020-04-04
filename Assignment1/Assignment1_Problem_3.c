#include <stdio.h>

#define COMPARE(x, y) (((x) < (y)) ? -1: ((x) == (y))? 0: 1)

typedef struct{
    int coef;
    int exp;
} polynomial;

int binSearch(polynomial poly[], int start, int end, int searchNum);

int main(){
    int A_coef[3] = {4, 3, 1}; int A_exp[3] = {2, 1, 0};
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

    for(int i = 0; i < 9; i++){
        C[i].coef = 0;
        C[i].exp = 0;
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int indexFromC = binSearch(C, 0, 8, A[i].exp + B[j].exp);

            if(indexFromC != -1){
                C[indexFromC].coef += A[i].coef * B[j].coef;
            }else{
                for(int k = 0; k < 9; k++){
                    if(C[k].coef == 0 && C[k].exp == 0){
                        C[k].coef += A[i].coef * B[j].coef;
                        C[k].exp = A[i].exp + B[j].exp;
                        break;
                    }
                }
            }
        }
    }

    for(int i = 0; i < 9; i++){
        printf("%dx%d + ", C[i].coef, C[i].exp);
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