Tree 

#include <stdio.h>
#include <stdlib.h>
struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *createtree(int value) {
    struct tree *newtree=(struct tree*)malloc(sizeof(struct tree));
    if(newtree == NULL) {
        printf("Allocation failed \n");
    }
    newtree->data = value;
    newtree->left = NULL;
    newtree->right = NULL;
    return newtree;
    }
    int main() {
        struct tree* root = createtree(10);
        
        root->left = createtree(20);
        root->right = createtree(30);
        
        root->left->left = createtree(40);
        root->left->right = createtree(50);
        
        root->right->left = createtree(60);
        root->right->right = createtree(70);
        
        printf("Value at root -> left -> right = %d\n",root->left->right->data);
        return 0;
    }


problem:

#include <stdio.h>

#include <stdlib.h>


struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode -> data = value;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}
void preorder(struct Node* root){
    if(root == NULL)
    return;
    
    printf(" %d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct Node* root){
    if(root == NULL)
    return;

    if (root->left == NULL && root->right == NULL) {
        printf("%d ", root->data);
        return;
    }

    inorder(root->left);
    inorder(root->right);
}

int main() {

    struct Node *root = createNode(10);

    root -> left = createNode(20);
    root -> right = createNode(30);

    root -> left -> left = createNode(40);
    root -> left -> right = createNode(50);
    
    

printf("Preorder Traversal:");
preorder(root);
printf("\nInorder Traversal:");
inorder(root);

    return 0;
}

output:
Preorder Traversal: 10  20  40  50  30 
Inorder Traversal:40 50 30 