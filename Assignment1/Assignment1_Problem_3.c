#include <stdio.h>

typedef struct{
    int coef;
    int exp;
} polynomial;

int main(){
    int A_coef[3] = {2, 2, 3}; int A_exp[3] = {3, 2, 4};
    int B_coef[3] = {7, 3, 4}; int B_exp[3] = {0, 1, 2};

    polynomial A[3];
    polynomial B[3];

    for(int i = 0; i < 3; i++){
        A[i].coef = A_coef[i];
        A[i].exp = A_exp[i];

        B[i].coef = B_coef[i];
        B[i].exp = B_exp[i];
    }

    return 0;
}