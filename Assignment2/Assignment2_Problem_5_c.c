#include <stdio.h>

#define MAX_DEGREE 101

typedef struct{
    int degree;
    float coef[MAX_DEGREE];
} polynomial;

polynomial mult(polynomial, polynomial);

int main(){
    polynomial a, b, c;

    a.degree = 4;
    a.coef[0] = 3;
    a.coef[1] = 2;
    a.coef[2] = 2;
    a.coef[3] = 0;
    a.coef[4] = 0;

    b.degree = 2;
    b.coef[0] = 4;
    b.coef[1] = 3;
    b.coef[2] = 7;

    c = mult(a, b);

    for (int i = 0; i <= c.degree; i++) {
        if(c.coef[i] != 0){
            printf("%5.1fx^%d ", c.coef[i], c.degree - i);
            if (c.coef[i + 1] > 0)
                printf("+");
        }
    }

    return 0;
}

polynomial mult(polynomial A, polynomial B){
    polynomial C;
    int i, j;

    for(i = 0; i<A.degree + B.degree+1; i++){
        C.coef[i] = 0;
    }

    C.degree = A.degree + B.degree;

    for (i = 0; i < A.degree + 1; i++){
        for (j = 0; j < B.degree + 1; j++){
            C.coef[i + j] += A.coef[i] * B.coef[j];
        }
    }

    return C;
}