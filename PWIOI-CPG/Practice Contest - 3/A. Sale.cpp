// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int i=0, count=0, sum=0;
    while(count<m && i<n)
    {
        if(arr[i]<0)
        {
            sum-=arr[i];
            count++;
        }
        i++;
    }
    cout<<sum;
}