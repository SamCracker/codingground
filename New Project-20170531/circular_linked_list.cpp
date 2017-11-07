#include<stdio.h>
#include<alloc.h>

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;

struct node *create_list(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the data");
    scanf("%d",&num);

    while(num!=-1){
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=num;
        if(start==NULL){
            new_node->next=new_node;
            start=new_node
        }
        else{
            ptr=start;
            while(ptr->next!=start)
                ptr=ptr->next;
            ptr->next=new_node;
            new_node->next=start;
        }
        printf("\nEnter the data");
        scanf("%d",&num);
    }
};

struct node *insertion_beginning(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter the data");
    scanf("%d",&num);

    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;

    ptr->next=new_node;
    new_node->next=start;
    start=new_node;
    return start;
};

struct node *deletion_beginning(struct node *start){
    struct node *ptr;
    ptr=start;

    while(ptr->next!=start)
        ptr=ptr->next;
    ptr->next=start->next;
    free(start);
    start=ptr->next;
    return start;
};

struct node *insertion_end(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter the num");
    scanf("%d",&num);
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;

    ptr=start;
    while(ptr->next!=start)
        ptr=ptr->next;
    ptr->next=new_node;
    new_node->next=start;
    return start;
};

int main(){
    int option;
    printf("\n******DOUBLY LINKED LIST******\n");
    do{
        printf("\n***MENU***\n");
        printf("\n1.Create a node");
        printf("\n2.Insertion at beginning");
        printf("\n3.Deletion at beginning");
        printf("\n4.Insertion at end");
        printf("\n5.Deletion at end");
        printf("\n6.Delete entire list");
        printf("\n7.Display the list");
        printf("\n8.Exit");

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

        case 8:

     }
    }while(option!=);


return 0;
}
