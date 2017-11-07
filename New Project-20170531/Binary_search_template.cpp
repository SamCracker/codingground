#include<iostream>
using namespace std;

template<typename comparable>

int binarySearch(const vector<comparable> &a, const comparable &x){
     int low=0, high=a.size()-1;

     while(low<=high){
        int mid=(high+low)/2;

        if(a[mid]<x)
            low=mid+1;
        else
            if(a[mid]>x)
            high=mid-1;
        else
            return mid;
     }
}
int main(){
    int A[]={1,2,3,4,5,6,7,8,9};
    int low=0;
    int high=A[size]-1;
    int mid;

    int findthis;

    cout<<"Konsa element dhoondna h "<<endl;
    cin>>findthis;
    cout<<binarySearch(A, findthis, low, high);

return 0;
}
