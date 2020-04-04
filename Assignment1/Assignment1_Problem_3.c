#include <stdio.h>

#define COMPARE(x, y) (((x) < (y)) ? -1: ((x) == (y))? 0: 1)

typedef struct{
    int coef;
    int exp;
} polynomial;

int binSearch(int list[], int start, int end, int searchNum);

int main(){
    int A_coef[3] = {2, 3, 1}; int A_exp[3] = {2, 1, 0};
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

    printf("%d\n", binSearch((*A).exp, 0, 2, 2));

    int list[3] = {3, 2, 1};

    printf("%d\n", binSearch(list, 0, 2, 2));

    for(int i = 0; i < 3; i++){
        printf("%d", (*(A + i)).exp);
    }

//    printf("%d", binSearch((A.coef), 0, 2, 2));

    return 0;
}

int binSearch(int list[], int start, int end, int searchNum){
    int middle;
    
    while(start >= end) {
        middle = (start + end) / 2;

        switch (COMPARE(list[middle], searchNum)) {
            case -1:
                start= middle + 1;
                break;
            case 0:
                return middle;
            case 1:
                end = middle - 1;
        }
    }

    return -1;
}