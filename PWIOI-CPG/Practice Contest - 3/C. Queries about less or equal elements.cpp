// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    vector <int> a(n), b(m);
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(a.begin(), a.end());
    for(int i=0; i<m; i++)
    {
        int low=0, high=n-1, mid=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]<=b[i])
                low=mid+1;
            else
                high=mid-1;
        }
        cout<<low<<" ";
    }
}
