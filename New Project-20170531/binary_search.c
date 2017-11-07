#include<stdio.h>
int main(void){
    int n, A[10], i, mid, s=0, e, search;
    printf("Enter the element count ");
    scanf("%d",&n);

    printf("Enter the sorted array's elements ");
    for(i=0; i<n; i++){
    scanf("%d",&A[i]);
    }
    printf("Enter the element for search ");
    scanf("%d",&search);

    e=n-1;

    while(s<=e){
      mid=(s+e)/2;

      if(A[mid]==search){
        printf("found at index %d ",mid+1);
        break;
      }
      else
       if(A[mid]>search){
          e=mid-1;
       }
       else{
       s=mid+1;
      }
    }
    if(s>e){
    printf("Element doesn't exist ");
    }

return 0;
}
