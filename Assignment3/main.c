#include <stdio.h>
#include <stdlib.h>

#define stack_size 100
#define numRow 10
#define numCol 10

#define FALSE 0
#define TRUE 1

typedef struct{
    short int row;
    short int col;
} element;

typedef struct{
    short int vert;
    short int horiz;
} offsets;

element stack[stack_size];
offsets direction[8];

int top = -1;
int EXIT_ROW = numRow - 1, EXIT_COL = numCol - 1;
int maze[numRow][numCol] = {
        { 0,0,1,0,1,1,1,0,1,0 },
        { 1,0,0,1,1,1,0,1,0,1 },
        { 1,1,0,1,1,0,1,0,1,1 },
        { 0,0,1,0,1,1,1,0,0,0 },
        { 0,1,1,0,1,0,1,0,1,0 },
        { 1,0,1,1,1,1,0,0,1,0 },
        { 1,1,0,1,0,1,0,0,1,0 },
        { 1,0,0,0,1,0,1,0,0,0 },
        { 0,1,0,1,1,1,0,1,1,0 },
        { 1,0,0,1,1,1,0,0,0,0 }
};

void path(void);
void push(element);
void stackFull();

element pop();

int main(void){
    direction[0].vert = -1; direction[0].horiz = 0;
    direction[1].vert = -1; direction[1].horiz = 1;
    direction[2].vert = 0; direction[2].horiz = 1;
    direction[3].vert = 1; direction[3].horiz = 1;
    direction[4].vert = 1; direction[4].horiz = 0;
    direction[5].vert = 1; direction[5].horiz = -1;
    direction[6].vert = 0; direction[6].horiz = -1;
    direction[7].vert = -1; direction[7].horiz = -1;

    path();

    return 0;
}

void path(void){
    int i, dir, found = FALSE;
    short int row, col, nextRow, nextCol;

    element position;
    maze[0][0] = 1;
    top = 0;

    stack[0].row = 0;
    stack[0].col = 0;

    while(top > -1 && !found){
        position = pop();

        row = position.row;
        col = position.col;
        dir = 0;

        while(dir < 8 && !found){
            nextRow = row + direction[dir].vert;
            nextCol = col + direction[dir].horiz;

            if(nextRow == EXIT_ROW && nextCol == EXIT_COL){
                found = TRUE;
            }else if(!(0 <= nextRow && nextRow <= numRow - 1) || !(0 <= nextCol && nextCol <= numCol - 1)){
                ++dir;
            }else if(!maze[nextRow][nextCol]){
                maze[nextRow][nextCol] = 1;
                position.row = row;
                position.col = col;
                push(position);

                row = nextRow;
                col = nextCol;
                dir = 0;
            }else{
                ++dir;
            }
        }
    }

    if(found){
        printf("The Path is:\n");
        printf("row   col\n");

        for(i = 0; i <= top; i++){
            printf("%2d%5d\n", stack[i].row, stack[i].col);
        }

        printf("%2d%5d\n", row, col);
        printf("%2d%5d\n", EXIT_ROW, EXIT_COL);
    }else{
        printf(" The maze does not have a path\n");
    }
}

void push(element item){
    if(top >= stack_size -1){
        stackFull();
    }
    stack[++top] = item;
}

void stackFull(){
    fprintf(stderr, "Stack is full, can not add element");
    exit(EXIT_FAILURE);
}

element pop(){
    return stack[top--];
}