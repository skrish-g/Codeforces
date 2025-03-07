// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        long long int n=0, k=0, b=0, s=0;
        scanf("%lld %lld %lld %lld", &n, &k, &b, &s);
        if(s>=k*b && s<=(k*b+n*(k-1)))
            if(s<(k*b+k))
            {
                for(int i=0; i<n-1; i++)
                {
                    printf("0 ");
                }
                printf("%lld\n", s);
            }
            else
            {
                printf("%lld ", k*b+k-1);
                s-=(k*b+k-1);
                while(s>=k)
                {
                    printf("%lld ", k-1);
                    s-=(k-1);
                    n--;
                }
                if(s)
                {
                    printf("%lld ", s);
                    n--;
                }
                while(n-1>0)
                {
                    printf("0 ");
                    n--;
                }
                printf("\n");
            }
        else
            printf("-1\n");
    }
}