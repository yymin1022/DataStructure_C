#include <stdio.h>

#define A_nonzero_terms 3
#define B_nonzero_terms 4
#define MAX_DEGREE 101

typedef struct{
    int degree;
    float coef[MAX_DEGREE];
} polynomial;

polynomial padd(polynomial, polynomial);

float A_coef[A_nonzero_terms] = {2.0, 2.0, 3.0};
int A_exp[A_nonzero_terms] = {7, 3, 2};

float B_coef[B_nonzero_terms] = {4.0, 3.0, 7.0, 7.0};
int B_exp[B_nonzero_terms] = {5, 3, 1, 0};

int main(){
    polynomial A, B, D;

    D = padd(A, B);

    return 0;
}

polynomial padd(polynomial A, polynomial B){
    polynomial C;

    return C;
}