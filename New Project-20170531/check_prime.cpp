#include<iostream>
using namespace std;

bool isPrime(int n){
     for(int i=2; i*i<=n; i++){
        if(n%2==0){
            return false;
        }
        return true;
     }
}

int main(){
    int n;
    cout<<"Enter the number:  "<<endl ;
    cin>>n;

    if(isPrime(n)){
        cout<<"Number is Prime "<<endl;
    }
    else
        cout<<"Number is not Prime "<<endl;
return 0;
}
