// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector <int> a(12);
    for(int i=0; i<12; i++)
        cin>>a[i];
    sort(a.begin(), a.end());
    int mySum=0, count=0, flag=0;
    for(int i=11; i>=0; i--)
    {
        if(k==0)
        {
            flag=1;
            break;
        }
        count++;
        mySum+=a[i];
        if(mySum>=k)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<count;
    else
        cout<<-1;
}