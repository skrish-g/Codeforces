// Thank You Zabi Sir!
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<pair<int,string>>arr(N);
    for(int i=0;i<N;i++)
        cin>>arr[i].second>>arr[i].first;
    for(int i=0;i<N;i++)
        arr[i].first*=-1;
    sort(arr.begin(),arr.end());
    for(int i=0;i<N;i++)
        arr[i].first*=-1;
    for(int i=0;i<N;i++)
        cout<<arr[i].second<<" "<<arr[i].first<<"\n";
}