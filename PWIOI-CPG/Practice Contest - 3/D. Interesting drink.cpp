// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    int q;
    cin>>q;
    vector<int> cons(q);
    for(int i=0; i<q; i++)
        cin>>cons[i];
    for(int i=0; i<q; i++)
    {
        int low=0, high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>cons[i])
                high=mid-1;
            else
                low=mid+1;
        }
        cout<<high+1<<"\n";
    }
}