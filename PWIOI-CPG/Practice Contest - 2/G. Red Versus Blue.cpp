// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int n, r, b;
        cin>>n>>r>>b;
        int q=r/(b+1);
        int rem=r%(b+1);
        while(n)
        {
            for(int j=0; j<q; j++)
            {
                cout<<"R";
                n--;
            }
            if(rem)
            {
                cout<<"R";
                rem--;
                n--;
            }
            if(n)
            {
                cout<<"B";
                n--;
            }
        }
        cout<<"\n";
    }
}