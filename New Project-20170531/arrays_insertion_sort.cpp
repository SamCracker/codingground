#include<iostream>
using namespace std;
int main(){
    int n, a[100], i, j, temp;
    cout<<"Kitne elements h "<<endl;
    cin>>n;
    cout<<"Array k elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=1; i<=n-1; i++){
        temp=a[i];
        j=j-1;
    }
    while((temp<a[j])&&(j>=0)){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=temp;
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
return 0;
}

