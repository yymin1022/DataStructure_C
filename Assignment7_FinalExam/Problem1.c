#include <stdio.h>
#include <stdlib.h>

#define MaxRow 5

typedef struct node{
    int data;
    struct node *left, *right, *parent;
}node;

node* insertNode(node**, int);

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

int main() {
    node* bstNode;

    for(int i = 0; i < MaxRow; i++){

    }

    return 0;
}

node* insertNode(node** treeNode, int data){
    node* resultNode = (node*)malloc(sizeof(node));

    if(*treeNode == NULL){
        resultNode -> data = data;
        resultNode -> left = NULL;
        resultNode -> right = NULL;
        *treeNode = resultNode;
        return resultNode;
    }

    if((*treeNode) -> data > data){
        resultNode = insertNode(&(*treeNode) -> left, data);
        resultNode -> parent = *treeNode;
    }else if((*treeNode)->data < data){
        resultNode = insertNode(&(*treeNode) -> right, data);
        resultNode -> parent = *treeNode;
    }
    
    return *treeNode;
}