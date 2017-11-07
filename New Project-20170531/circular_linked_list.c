#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

int insertion(int num){
    struct node *new_node;
    printf("\nEnter the data");
    scanf("%d",&num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data=num;

    if(front == NULL){
        front=new_node;
        front->next=NULL;
        rear=front;
    }
    else{
        front->next=new_node;
        front=new_node;
        front->next=rear;
    }
    return num;
 }

 void deletion(){
    struct node *ptr;
    ptr=rear;

    if(ptr=rear){
        rear=rear->next;
        free(rear);
    }
    else{
        printf("\nQUEUE IS EMPTY");
    }
 }

 void display(){
    struct node *ptr=rear;
    if(ptr!=NULL){
        printf("\nElements are ");
        while(ptr!=front){
            printf("\t%d",ptr->data);
            ptr=ptr->next;
        }
        if(ptr==front){
            printf("\t%d",ptr->data);
        }
        printf("\n");
    }
    else{
        printf("QUEUE IS EMPTY!! :) :) ");
    }
 }

int main(){
    int option, num;
    do{
        printf("\n***MENU***\n");
        printf("\n**CIRCULAR QUEUE**\n");
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Display");
        printf("\n4.EXIT");

        printf("\nEnter the option");
        scanf("%d",&option);

     switch(option){
 case 1: insertion(num);
         break;
 case 2: deletion();
         break;
 case 3: display();
         break;
 case 4: exit(0);
         break;

 default: printf("\nWRONG CHOICE\n");
 }
    }while(option!=5);
return 0;
}
