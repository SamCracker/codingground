#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

int insertion_beginning(int num){
    struct node *new_node;
    printf("Enter the data: ");
    scanf("%d",&num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data=num;

    if(front == NULL)
        front = rear = new_node;
    else{
        rear->next=new_node;
        rear=new_node;
    }
    return num;
}

void deletion(){
    if(front == NULL)
        printf("\nQUEUE is EMPTY");
    else{
        struct node *ptr;
        ptr=front;
        front=front->next;
        printf("\nDeleted data is %d",ptr->data);
        free(ptr);
    }
}

int display(){
    if(front==NULL)
        printf("\nQueue is empty!!!");
    else{
        struct node *ptr;
        ptr=front;
        while(ptr->next!=NULL){
            printf("%d --->",ptr->data);
            ptr=ptr->next;
        }
        printf("%d --->NULL\n",ptr->data);
    }
}

int main(){
    int option, num;
   do{
    printf("\n***MENU***\n");
    printf("\n***CIRCULAR QUEUE USING LINKED LIST");
    printf("\n1.Inserting node");
    printf("\n2.Deleting node ");
    printf("\n3.Display");
    printf("\n4.EXIT");

    printf("\nChoose the option ");
    scanf("%d",&option);

    switch(option){

    case 1: insertion_beginning(num);
            printf("\nData is inserted");
            break;

    case 2: deletion();
            break;

    case 3: display();
            break;

    case 4: exit(0);
            break;
    default: printf("\nWRONG CHOICE :( :( ");

 }

   }while(option!=4);

return 0;
}

