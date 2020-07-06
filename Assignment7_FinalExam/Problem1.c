#include <stdio.h>
#include <stdlib.h>

#define MaxRow 5

typedef struct node{
    int key, value;
    struct node *left, *right;
}node;

node* insertNode(node**, int, int);
node* searchNode(node**, int, int);
void addNode(node**, int, int);
void printResult(node*);

int bst[MaxRow][2] = {
        {3, 17},
        {1, 18},
        {5, 20},
        {4, 20},
        {2, 15}
};

int mh[MaxRow][2] = {
        {2, 20},
        {1, 15},
        {5, 20},
        {1, 19},
        {7, 17}
};

int main(){
    node* bstNode = NULL;

    for(int i = 0; i < MaxRow; i++){
        insertNode(&bstNode, bst[i][0], bst[i][1]);
    }

    for(int i = 0; i < MaxRow; i++){
        addNode(&bstNode, mh[i][0], mh[i][1]);
    }

    printResult(bstNode);

    return 0;
}

node* insertNode(node** treeNode, int key, int value){
    node* resultNode = (node*)malloc(sizeof(node));

    if(*treeNode == NULL){
        resultNode -> key = key;
        resultNode -> value = value;
        resultNode -> left = NULL;
        resultNode -> right = NULL;
        *treeNode = resultNode;
        return resultNode;
    }

    if((*treeNode) -> key > key){
        resultNode = insertNode(&(*treeNode) -> left, key, value);
    }else if((*treeNode) -> key < key){
        resultNode = insertNode(&(*treeNode) -> right, key, value);
    }
    
    return *treeNode;
}

node* searchNode(node** treeNode, int key, int value){
    node* resultNode = (node*)malloc(sizeof(node));

    if(*treeNode == NULL){
        insertNode(treeNode, key, value);
        return resultNode;
    }

    if((*treeNode) -> key == key){
        return *treeNode;
    }

    if((*treeNode) -> key > key){
        resultNode = searchNode(&((*treeNode) -> left), key, value);
    }else{
        resultNode = searchNode(&((*treeNode) -> right), key, value);
    }

    return resultNode;
}

void addNode(node** treeNode, int  key, int value){
    node* valueNode = searchNode(treeNode, key, value);
    valueNode -> value += value;
}

void printResult(node* treeNode){
    if(treeNode != NULL){
        printResult(treeNode -> left);
        printf("(%d, %d)\n", treeNode -> key, treeNode -> value);
        printResult(treeNode -> right);
    }
}