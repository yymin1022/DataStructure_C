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
    for(int i = 0; i <= A.degree; i++){
        A.coef[i] = 0;
        for(int j = 0; j < sizeof(A_exp) / sizeof(int); j++){
            if(A_exp[j] == A.degree - i){
                A.coef[i] = A_coef[j];
            }
        }
    }

    B.degree = B_exp[0];
    for(int i = 0; i <= B.degree; i++){
        B.coef[i] = 0;
        for(int j = 0; j < sizeof(B_exp) / sizeof(int); j++){
            if(B_exp[j] == B.degree - i){
                B.coef[i] = B_coef[j];
            }
        }
    }

    D = padd(A, B);

    for (int i = 0; i <= D.degree; i++) {
        if(D.coef[i] != 0){
            printf("%3.1fx^%d ", D.coef[i], D.degree - i);
            if (i != D.degree) {
                printf("+ ");
            }
        }
    }

    return 0;
}

polynomial padd(polynomial A, polynomial B){
    polynomial C;
    C.degree = (A.degree > B.degree) ? A.degree : B.degree;

    int offsetA = C.degree - A.degree;
    int offsetB = C.degree - B.degree;

    for(int i = 0; i <= C.degree; i++){
        if(i - offsetA >= 0){
            C.coef[i] += A.coef[i - offsetA];
        }
        if(i - offsetB >= 0){
            C.coef[i] += B.coef[i - offsetB];
        }
    }

    return C;
}