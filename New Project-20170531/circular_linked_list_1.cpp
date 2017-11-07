#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;

struct node *insertion_beginning(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter the data");
    scanf("%d",&num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    while(ptr->next!=start){
        ptr=ptr->next;
    }
};
int main(){
    int option;
   do{
    printf("\n***MENU***\n");
    printf("\n1.Inserting node at beginning");
    printf("\n2.Deleting node at beginning");
    printf("\n3.Inserting node at end");
    printf("\n4.Deleting node at end");
    printf("\n5.Display");
    printf("\n6.EXIT");

    printf("\nChoose the option ");
    scanf("%d",&option);

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
    }

   }while(option!=6)

return 0;
}

