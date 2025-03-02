// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        if((n&(n-1))==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}