// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if(x==0)
        return y;
    if(y==0)
        return x;
    if(x>=y)
        return gcd(x%y, y);
    else
        return gcd(x, y%x);
}
int main()
{
	int t;
	cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
            cin>>arr[j];
        int flag=1, max=INT_MIN;
        for(int j=0; j<n; j++)
        {
            if(arr[j]!=arr[j+1] && j!=n-1)
                flag=0;
            if(arr[j]>max)
                max=arr[j];
        }
        if(flag)
            cout<<"No\n";
        else
        {
            cout<<"Yes\n";
            for(int j=0; j<n; j++)
                if(arr[j]==max)
                    cout<<2<<" ";
                else
                    cout<<1<<" ";
            cout<<"\n";
        }
    }
}