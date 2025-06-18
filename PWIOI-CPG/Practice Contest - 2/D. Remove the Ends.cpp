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
        int sum=0;
        int s=a.size();
        int st=0;
        int en=s-1;
        while(s)
        {
            if(a[st]>0)
            {
                sum+=a[st];
                st++;
                s--;
                continue;
            }
            if(a[en]<0)
            {
                sum-=a[en];
                en--;
                s--;
                continue;
            }
            st++;
            en--;
        }
        cout<<sum;
    }
}