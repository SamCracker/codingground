#include<stdio.h>

int BinarySearch(int A[], int size, int num){
    int low=0, mid;
    int high=size-1;

    while(low<=high){
       mid=low+(high-low)/2; //To avoid overflow
       if(A[mid]==num){
       return mid;
       }
       else if(A[mid]<num){
       low=mid+1;
       }
       else
       high=mid-1;
    }
   return -1;
}

int main(void){
    int A[10], size, num, position, i;
    printf("\nHow many elements in the array ");
    scanf("%d",&size);

    printf("\nEnter the elements of the array ");
    for(i=0; i<size; i++){
    scanf("%d",&A[i]);
    }
    printf("Enter the element to Search ");
    scanf("%d",&num);

    position=BinarySearch(A,size,num);

    if(position==-1){
      printf("Element %d not Found ",num);
    }

    else
      printf("Element %d Found at index %d ", num, position+1);

return 0;
}
