// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int N;
    cin>>N;
    map<string,int> mp;
    for(int i=0; i<N; i++)
    {
        string s;
        cin>>s;
        if(mp.find(s)==mp.end())
        {
            cout<<"OK\n";
            mp[s]=0;
        }
        else
        {
            mp[s]++;
            cout<<s<<mp[s]<<"\n";
        }
    }
}