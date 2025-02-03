// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int a, b, count=0;
    scanf("%d %d", &a, &b);
    while(a>=b)
    {
        a/=b;
        b++;
    }
}