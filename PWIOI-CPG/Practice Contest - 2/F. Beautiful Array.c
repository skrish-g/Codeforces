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
        if(s==0 && b==0)
        {
            for(int i=0; i<n; i++)
                printf("0 ");
            printf("\n");
        }
        else if(s>=k*b && s<=(k*b+n*(k-1)))
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
// Just for saving this code for future reference
// // Thank You Zabi Sir!
// #include <stdio.h>
// int main() {
// 	int T;
// 	scanf("%d", &T);
// 	for(int i=0; i<T; i++)
// 	{
// 	    int N;
// 	    scanf("%d", &N);
//         char S[N];
// 	    for(int j=0; j<N; j++)
// 	        scanf(" %c", &S[j]);
// 	    for(int j=0; j<N/2; j++)
// 	    {
// 	        char temp=S[2*j];
// 	        S[2*j]=S[2*j+1];
// 	        S[2*j+1]=temp;
// 	    }
// 	    for(int j=0; j<N; j++)
// 	        S[j]='a'+'z'-S[j];
// 	    for(int j=0; j<N; j++)
// 	        printf("%c", S[j]);
// 	    printf("\n");
// 	}
// }