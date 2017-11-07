#include<iostream>
using namespace std;
int main(){

    int A[20], n, i, j;
    cout<<"Enter the element count "<<endl;
    cin>>n;

    cout<<"Enter the elements "<<endl;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    for(i=1; i<n; i++){
        for(j=0; j<(n-i); j++)
        if(A[j]>A[j+1]){
            swap(A[j],A[j+1]);
        }
    }
    for(i=0; i<n; i++)
        cout<<" "<<A[i]<<endl;
return 0;
}
