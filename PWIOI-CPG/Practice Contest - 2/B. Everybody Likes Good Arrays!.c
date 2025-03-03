// Thank You Zabi Sir! 
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int count=0;
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d ", &a[i]);
            if(a[i]%2==a[i-1]%2 && i!=0)
                count++;
        }
        printf("%d\n", count);
    }
}