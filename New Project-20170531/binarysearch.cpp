#include<iostream>
using namespace std;
int main() {

    int a[100], N, key;

    cin>>N;

    for(int i=0; i<N; i++)
    cin>>a[i];

    cin>>key;

    int s=0;
    int e=N;
    int mid;

       while(s<e)
    {
        mid=(s+e)/2;

        if(a[mid]==key)
        {
            cout<<mid;
            break;
        }
        else if(a[mid]>key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
       if(s>e)
       cout<<"-1";
        return 0;
    }


