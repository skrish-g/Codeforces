// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    int TotalSum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        TotalSum+=a[i];
    }
    sort(a.begin(), a.end());
    int coins=0, myCoinSum=0;
    for(int i=n-1; i>=0; i--)
    {
        coins++;
        myCoinSum+=a[i];
        TotalSum-=a[i];
        if(myCoinSum>TotalSum)
            break;
    }
    cout<<coins;
}