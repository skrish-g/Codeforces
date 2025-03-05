// Thank You Zabi Sir!
#include <stdio.h>
int clear_left(int *, int);
int clear_right(int *, int, int);
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int n=0, sum1=0, sum2=0;
        scanf("%d", &n);
        int a[n];
        for(int j=0; j<n; j++)
            scanf("%d ", &a[j]);
        int b[n];
        for(int j=0; j<n; j++)
        {
            b[j]=a[j];
        }
        for(int j=n-1; j>=0; j--)
        {
            if(a[j]>0)
            {
                sum1+=a[j];
                clear_left(a, j);
            }
            if(a[n-j-1]<0)
            {
                sum1-=a[n-j-1];
                clear_right(a, n-j-1, n);
            }
        }
        for(int j=0; j<n; j++)
        {
            if(b[j]>0)
            {
                sum2+=b[j];
                clear_left(b, j);
            }
            if(b[n-j-1]<0)
            {
                sum2-=b[n-j-1];
                clear_right(b, n-j-1, n);
            }
        }
        if(sum1>sum2)
            printf("%d\n", sum1);
        else
            printf("%d\n", sum2);
    }
}
int clear_left(int *a, int j)
{
    for(int i=0; i<=j; i++)
    {
        a[i]=0;
    }
}
int clear_right(int *a, int k, int n)
{
    for(int i=k; i<=n; i++)
    {
        a[i]=0;
    }
}