#include <stdio.h>

#define  MAX_COL 50

typedef struct{
    int row;
    int col;
    int value;
} term;

void fastTranspose(term a[], term b[]);

int main(){
    term a[MAX_COL], b[MAX_COL];
    a[0].row = 6; a[0].col = 6; a[0].value = 8;
    a[1].row = 0; a[1].col = 0; a[1].value = 15;
    a[2].row = 0; a[2].col = 3; a[2].value = 22;
    a[3].row = 0; a[3].col = 5; a[3].value = -15;
    a[4].row = 1; a[4].col = 1; a[4].value = 11;
    a[5].row = 1; a[5].col = 2; a[5].value = 3;
    a[6].row = 2; a[6].col = 3; a[6].value = -6;
    a[7].row = 4; a[7].col = 0; a[7].value = 91;
    a[8].row = 5; a[8].col = 2; a[8].value = 28;

    for(int i = 0 ; i < 9 ; i++){
        printf("%d, %d, %d\n", a[i].row, a[i].col, a[i].value);
    }

    fastTranspose(a, b);

    printf("\n");

    for(int i = 0 ; i < 9 ; i++){
        printf("%d, %d, %d\n", b[i].row, b[i].col, b[i].value);
    }
}

void fastTranspose(term a[], term b[]){
    int rowTerms[MAX_COL], startingPos[MAX_COL];
    int i, j, numCols = a[0].col, numTerms = a[0].value;
    b[0].row = numCols;
    b[0].col = a[0].row;
    b[0].value = numTerms;

    if(numTerms > 0){
        for(i = 0 ; i < numCols ; i++){
            rowTerms[i] = 0;
        }

        for(i = 1 ; i <= numTerms ; i++){
            rowTerms[a[i].col]++;
        }

        startingPos[0] = 1;

        for(i = 1 ; i < numCols ; i++){
            startingPos[i] = startingPos[i - 1] + rowTerms[i - 1];
        }

        for(i = 1 ; i <= numTerms ; i++){
            j = startingPos[a[i].col]++;
            b[j].row = a[i].col;
            b[j].col = a[i].row;
            b[j].value = a[i].value;
        }
    }
}