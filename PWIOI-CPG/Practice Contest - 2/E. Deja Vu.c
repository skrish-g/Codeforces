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
            for(int k=0; k<q; k++)
            {
                int check=pow(2, x[k]);
                if(a[j]%check==0)
                {
                    int add=pow(2, x[k]-1);
                    a[j]+=add;
                }
            }
            printf("%d ", a[j]);
        }            
        printf("\n");
    }
}