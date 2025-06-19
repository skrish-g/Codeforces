// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int n;
        cin>>n;
        vector<int>a(n,0);
        for(int i=0; i<n; i++)
            cin>>a[i];
        long pf_pos[n];
        long pf_neg[n];
        long sum=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<0)
                sum-=a[i];
            pf_neg[i]=sum;
        }
        sum=0;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]>0)
                sum+=a[i];
            pf_pos[i]=sum;
        }
        int ans=0;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]>0 && pf_neg[i]>a[i])
            {
                ans+=pf_neg[i];
            }
            else if(a[i]<0 && pf_pos[i]>a[i])
        }
    }
}