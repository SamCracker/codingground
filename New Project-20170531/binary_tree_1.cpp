#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *left, struct node *right;
};

struct node *tree;

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
    case 1:
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
