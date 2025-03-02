// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int n, min=0;
    scanf("%d\n", &n);
    char check='X';
    for(int i=1; i<=n; i++)
    {
        char s;
        scanf("%c", &s);
        if(check!=s)
            check=s;
        else
            min++;
    }
    printf("%d", min);
}