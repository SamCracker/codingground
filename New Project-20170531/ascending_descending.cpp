#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int k=n/2;


          for(int i=0;i<k;i++)
            cout<<a[i]<<" ";

            for(int i=n-1;i>=k;i--)
            cout<<a[i]<<" ";

            cout<<endl;

    }
	//code
	return 0;
}
