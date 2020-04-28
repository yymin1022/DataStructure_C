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
    short int dir;
} element;

typedef struct{
    short int vert;
    short int horiz;
} offsets;

element stack[stack_size];
offsets move[8];

int top = -1;
int EXIT_ROW = numRow, EXIT_COL = numCol;
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
void stackEmpty();
void stackFull();

element pop();

int main(void){
    move[0].vert = -1; move[0].horiz = 0;
    move[1].vert = -1; move[1].horiz = 1;
    move[2].vert = 0; move[2].horiz = 1;
    move[3].vert = 1; move[3].horiz = 1;
    move[4].vert = 1; move[4].horiz = 0;
    move[5].vert = 1; move[5].horiz = -1;
    move[6].vert = 0; move[6].horiz = -1;
    move[7].vert = -1; move[7].horiz = -1;

    path();

    return 0;
}

void path(void){
    int i, j, row, col, nextRow, nextCol, dir, found = FALSE;

    element position;
    maze[1][1] = 1;
    top = 0;

    stack[0].row = 1;
    stack[0].col = 1;
    stack[0].dir = 1;

    while(top > -1 && !found){
        position = pop();

        row = position.row;
        col = position.col;
        dir = position.dir;

        while(dir < 8 && !found){
            nextRow = row + move[dir].vert;
            nextCol = col + move[dir].horiz;

            if(nextRow == EXIT_ROW && nextCol == EXIT_COL){
                found = TRUE;
            }else if(!maze[nextRow][nextCol]){
                maze[nextRow][nextCol] = 1;
                position.row = row;
                position.col = col;
                position.dir = ++dir;
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

void stackEmpty(){

}

void stackFull(){
    fprintf(stderr, "Stack is full, can not add element");
    exit(EXIT_FAILURE);
}

element pop(){
    if(top == -1){
//        return stackEmpty();
    }
    return stack[top--];
}