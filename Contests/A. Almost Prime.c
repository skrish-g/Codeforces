// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int n, count_almost_prime=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        int count_prime_factors=0;
        int j=2;
        int i_copy=i;
        while(j<=i_copy)
        {
            int flag=1;
            for(int k=2; k*k<=j; k++)
            {
                if(j%k==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1 && i%j==0)
            {
                count_prime_factors++;
                i_copy/=j;
            }
            j++;
        }
        if(count_prime_factors==2)
            count_almost_prime++;
    }
    printf("%d", count_almost_prime);
}