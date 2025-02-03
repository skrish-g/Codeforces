// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum_x=0, sum_y=0, sum_z=0;
    for(int i=1; i<=n; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        sum_x+=x;
        sum_y+=y;
        sum_z+=z;
    }
    if(sum_x==sum_y && sum_y==sum_z && sum_z==0)
        printf("YES");
    else
        printf("NO");
}