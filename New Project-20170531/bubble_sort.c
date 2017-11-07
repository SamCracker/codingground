#include<stdio.h>
int main(void){
    int A[100], i, j, n;
    printf("How many elements in the array");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
               int t = A[j];
                A[j]=A[j+1];
                A[j+1]=0;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d",A[i]);
    }

return 0;
}
