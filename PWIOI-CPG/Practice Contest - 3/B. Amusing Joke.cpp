// Thank You Zabi Sir!
#include <bits/stdc++.h>
// But using concept of both C and C++ for experiment purpose only
using namespace std;
int main()
{
    char guest[201], host[101], pile[201];
    scanf("%s %s %s", guest, host, pile);
    int x=strlen(pile);
    if((strlen(guest)+strlen(host))!=x)
    {
        cout<<"NO\n";
        return 0;
    }
    strcat(guest, host);
    for(int i=0; i<x;i++)
    {
        for(int j=0; j<x-i-1; j++)
        {
            if(guest[j]>guest[j+1])
            {
                char temp=guest[j];
                guest[j]=guest[j+1];
                guest[j+1]=temp;
            }
        }
    }
    for(int i=0; i<x;i++)
    {
        for(int j=0; j<x-i-1; j++)
        {
            if(pile[j]>pile[j+1])
            {
                char temp=pile[j];
                pile[j]=pile[j+1];
                pile[j+1]=temp;
            }
        }
    }
    if(strcmp(guest, pile)==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}