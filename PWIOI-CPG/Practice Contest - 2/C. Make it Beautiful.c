// Thank You Zabi Sir!
#include <stdio.h>
int check(int*, int);
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int flag=1;
        int sum=0;
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d ", &a[i]);
        }
        flag=check(a, n);
        if(flag)
        {
            beauty(a, n);
        }
        else
        {
            int temp=a[0];
            a[0]=a[n-1];
            a[n-1]=temp;
            flag=check(a, n);
            if(flag)
            {
                beauty(a, n);
            }
            else
                printf("NO\n");
        }
    }
}
int check(int* a, int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==sum)
            return 0;
        sum+=a[i];
    }
    return 1;
}
int beauty(int* a, int n)
{
    printf("YES\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}