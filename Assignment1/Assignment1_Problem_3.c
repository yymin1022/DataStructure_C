#include <stdio.h>

typedef struct{
    int coef;
    int exp;
} polynomial;

int binSearch(int list[], int start, int end, int searchNum);

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

int binSearch(int list[], int start, int end, int searchNum){
    int middle;
    
    while(start >= end) {
        middle = (start + end) / 2;

        if(list[middle] < searchNum){
            start = middle + 1;
        }else if(list[middle] > searchNum){
            end = middle - 1;
        }else{
            return middle;
        }
    }
    
    return -1;
}