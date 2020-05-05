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

    A.degree = A_exp[0];
    for(int i = 0; i < A_nonzero_terms; i++){
        A.coef[i] = A_coef[i];
    }

    B.degree = B_exp[0];
    for(int i = 0; i < B_nonzero_terms; i++){
        B.coef[i] = B_coef[i];
    }

    D = padd(A, B);

    printf("C(x) = ");
    for (int i = 0; i <= D.degree; i++) {
        if(D.coef[i] != 0){
            printf("%5.1fx^%d ", D.coef[i], i);
            if (i != D.degree) {
                printf("+");
            }
        }
    }

    return 0;
}

polynomial padd(polynomial A, polynomial B){
    polynomial C;

    C.degree = (A.degree > B.degree) ? A.degree : B.degree;

    int A_index = 0;
    int B_index = 0;
    int C_index = 0;

    int A_degree = A.degree;
    int B_degree = B.degree;

    while(A_index <= A.degree && B_index <= B.degree){
        if(A_degree > B_degree){
            C.coef[C_index++] = A.coef[A_index++];
            A_degree--;
        }else if(A_degree == B_degree){
            C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
            A_degree--;
            B_degree--;
        }else{
            C.coef[C_index++] = B.coef[B_index++];
            B_degree--;
        }
    }

    return C;
}