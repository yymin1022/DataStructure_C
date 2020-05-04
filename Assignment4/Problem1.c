#include <stdio.h>

#define A_nonzero_terms 3
#define B_nonzero_terms 4
#define MAX_DEGREE 101

typedef struct{
    int degree;
    float coef[MAX_DEGREE];
} polynomial;

polynomial padd(polynomial, polynomial);
void printPolynomial(polynomial, int*);

float A_coef[A_nonzero_terms] = {2.0, 2.0, 3.0};
int A_exp[A_nonzero_terms] = {7, 3, 2};

float B_coef[B_nonzero_terms] = {4.0, 3.0, 7.0, 7.0};
int B_exp[B_nonzero_terms] = {5, 3, 1, 0};

int main(){
    polynomial A, B, D;

    A.degree = A_nonzero_terms;
    for(int i = 0; i < A_nonzero_terms; i++){
        A.coef[i] = A_coef[i];
    }

    B.degree = B_nonzero_terms;
    for(int i = 0; i < B_nonzero_terms; i++){
        B.coef[i] = B_coef[i];
    }

    D = padd(A, B);

    printPolynomial(A, A_exp);
    printPolynomial(B, B_exp);
//    printPolynomial(D)

    return 0;
}

polynomial padd(polynomial A, polynomial B){
    polynomial C = A;



    return C;
}

void printPolynomial(polynomial poly, int *exp){
    printf("%.1fx^%d", poly.coef[0], *(exp));

    for(int i = 1; i < poly.degree; i++){
        printf(" + %.1fx^%d", poly.coef[i], *(exp + i));
    }

    printf("\n");
}