#include <iostream>
#include<limits.h>
using namespace std;

int main() {
    int t,n,x,f=-2;
    long int c;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        f=INT_MIN;
        c=INT_MAX;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=x && arr[i]>=f)
                 f=arr[i];
            if(arr[i]>=x && arr[i]<=c)
                 c=arr[i];
        }
        if(f==INT_MIN)
        cout<<"Floor doesn't exist"<<endl;
        else
        cout<<f<<endl;

        if(c==INT_MAX)
        cout<<"Ceil doesn't exist"<<endl;
        else
        cout<<c<<endl;

    }
	//code
	return 0;
}
