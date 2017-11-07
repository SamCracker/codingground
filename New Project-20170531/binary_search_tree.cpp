#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *left, struct node *right;
};

struct node *tree;

void create_tree(struct node *tree){
    tree=NULL;
}

struct node *insert(struct node *tree, int num){
    printf("\nEnter the node");
    scanf("%d",&num);
    struct node *new_node, *nodeptr, *parentptr;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->left=NULL;
    new_node->right=NULL;

    if(tree==NULL){
        tree=new_node;
        tree->left=NULL:
        tree->right=NULL;
    }
    else{
        parentptr=NULL;
        nodeptr=tree;
        while(nodeptr!=NULL){
            parentptr=nodeptr;
            if(num<nodeptr->data)
                nodeptr=nodeptr->left;
            else
                nodeptr=nodeptr->right;
        }
        if(val<parent->data)
            parentnode=parentnode->left;
        else
            parentnode=parentnode->right;
    }
    return tree;
}

void preorderTraversal(struct node *tree){
    if(tree!=NULL){
        printf("%d\t",tree->data);
        preorderTraversal(tree->left);
        preorderTraversal(tree->right);
    }
}

void inorderTraversal(struct node *tree){
    if(tree!=NULL){
        inorderTraversal(tree->left);
        printf("%d\t",tree->data);
        inorderTraversal(tree->right);
    }
}

void postorderTraversal(struct node *tree){
    if(tree!=NULL){
        postorderTraversal(tree->left);
        postorderTraversal(tree->right);
        printf("%d\t",tree->data);
    }
}

struct node *deleteElement(struct node *tree, int num){
    struct node *cur, *parent, *suc, *psuc, *ptr;
    if(tree->left==NULL){
        printf("\nThe tree is empty");
        return tree;
    }
    parent=tree;
    cur=tree->left;
    while(cur!=NULL && val!=cur->data){
        parent=cur;
        cur=(val<cur->data)?cur->left:cur->right;
    }

    if(cur==NULL){
        printf("\nThe value to be deleted is not present in the tree");
        return(tree);
    }

    if(cur->left == NULL)
        ptr=cur->right;
    else if(cur->right==NULL)
        ptr=cur->left;
    else{
     psuc=cur;
     cur=cur->left;

    if(cur==psuc){
        suc->left=cur->right;
    }
    else{
        suc->left=cur->right;
        psuc->left=psuc->right;
        suc->right=suc->right;
    }
    ptr=suc;
  }
  if(parent->left==cur)
        parent->left=ptr;
  else
        parent->right=ptr;
  free(cur);
  return tree;
};

int main(){
    int option;

    printf("\n***MENU***\n");
    printf("\n1.Create binary tree");
    printf("\n2.Insertion in binary tree");
    printf("\n3.Deletion in binary tree");
    printf("\n4.Traverse using Inorder");
    printf("\n5.Traverse using Preorder");
    printf("\n6.Traverse using Postorder");

    do{
        switch(option){
    case 1:printf("\nTree is created");
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        break;

    case 6:
        break;

    case 7:
        break;

    default:printf("\nInvalid choice");
        }
    }while(option!=7);
return 0;
}

