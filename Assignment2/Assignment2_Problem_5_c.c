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
    a.coef[0] = 0;
    a.coef[1] = 0;
    a.coef[2] = 2;
    a.coef[3] = 2;
    a.coef[4] = 3;

    b.degree = 2;
    b.coef[0] = 7;
    b.coef[1] = 3;
    b.coef[2] = 4;

    c = mult(a, b);

    printf("C(x) = ");
    for (int i = 0; i <= c.degree; i++) {
        if(c.coef[i] != 0){
            printf("%5.1fx^%d ", c.coef[i], i);
            if (i != c.degree) {
                printf("+");
            }
        }
    }

    return 0;
}

polynomial mult(polynomial A, polynomial B){
    polynomial C;
    int i, j;

    C.degree = A.degree + B.degree;

    for (i = A.degree; i >= 0; i--){
        for (j = B.degree; j >= 0; j--){
            C.coef[i + j] += A.coef[i] * B.coef[j];
        }
    }

    return C;
}