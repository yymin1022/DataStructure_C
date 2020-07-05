#include <stdio.h>
#include <stdlib.h>

#define MaxRow 5

typedef struct node{
    int key, value;
    struct node *left, *right, *parent;
}node;

node* insertNode(node**, int, int);

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
    node* bstNode;

    for(int i = 0; i < MaxRow; i++){
        insertNode()
    }

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
        resultNode -> parent = *treeNode;
    }else if((*treeNode) -> key < key){
        resultNode = insertNode(&(*treeNode) -> right, key, value);
        resultNode -> parent = *treeNode;
    }
    
    return *treeNode;
}