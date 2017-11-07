#include<iostream>
#include<cmath>
using namespace std;

int binarySearch(int L[], int x, int first, int last){
     if(last>=first){
        int middle=(first+last)/2;

        if(x==L[middle]){
            return middle;
        }

        else if(x<L[middle]){
            return binarySearch(L, x, first, middle-1);
        }
        else
            return binarySearch(L, x, first, middle+1);
     }
     return -1;
}

int main(){
    int A[]={1,2,3,4,5,6,7,8,9,11};
    int size;
    int n=A[size];
    int myfirst=0;
    int mylast=n-1;
    int findthis;

    cout<<"Konsa element dhoondna h "<<endl;
    cin>>findthis;

    int resultloc=binarySearch(A, findthis, myfirst, mylast);

return 0;
}
