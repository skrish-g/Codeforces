// Thank You Zabi Sir!
#include <stdio.h>
#include <math.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int n=0, q=0;
        scanf("%d %d", &n, &q);
        int a[n], x[q];
        for(int j=0; j<n; j++)
            scanf("%d ", &a[j]);
        for(int j=0; j<q; j++)
            scanf("%d ", &x[j]);
        for(int j=0; j<n; j++)
        {
            if(a[j]%2==0)
                for(int k=0; k<q; k++)
                {
                    if(a[j]%(1<<x[k])==0)
                    {
                        a[j]+=(1<<(x[k]-1));
                    }
                }
            printf("%d ", a[j]);
        }            
        printf("\n");
    }
}