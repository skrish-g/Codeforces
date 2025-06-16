// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int t=0;
    scanf("%d", &t);
    while(t)
    {
        int n, k, flag=1;
        scanf("%d %d", &n, &k);
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        for(int i=1; i<n; i++)
            if(arr[i-1]>arr[i])
                flag=0;
        if(k==1 && flag==0)
            printf("NO\n");
        else
            printf("YES\n");
        t--;
    }
}