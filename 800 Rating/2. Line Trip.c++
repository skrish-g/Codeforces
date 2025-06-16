// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, x;
        cin>>n>>x;
        int arr[n];
        for(int j=0; j<n; j++)
            cin>>arr[j];
        int max=arr[0];
        if(n==1)
            max=arr[0];
        for(int j=1; j<n; j++)
            if((arr[j]-arr[j-1])>max)
                max=arr[j]-arr[j-1];
        if(2*(x-arr[n-1])>max)
            cout<<2*(x-arr[n-1])<<"\n";
        else
            cout<<max<<"\n";
    }
}