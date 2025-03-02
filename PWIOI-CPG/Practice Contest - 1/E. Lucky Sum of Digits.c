// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int n, count4=0, count7=0;
    scanf("%d", &n);
    int flag=0;
    while(n%7!=0 && n>0)
    {
        count4++;
        n-=4;
    }
    while(n%7==0 && n>0)
    {
        count7++;
        n-=7;
    }
    if(n==0)
    {
        for(int i=1; i<=count4; i++)
        {
            printf("4");
            flag=1;
        }
        for(int i=1; i<=count7; i++)
        {
            printf("7");
            flag=1;
        }
    }
    if(flag==0)
        printf("-1");
}