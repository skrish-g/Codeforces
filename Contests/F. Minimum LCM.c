// // Thank You Zabi Sir!
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for(int T=1; T<=t; T++)
//     {
//         int n, min=1000000000, pfa, pfb;
//         scanf("%d", &n);
//         for(int i=1, j=n-1; i<=n/2 && j>=n/2; i++, j--)
//         {
//             int a=i, b=j, common_factor=1;
//             for(int k=i; k>=2; k--)
//             {
//                 if(a%k==0 && b%k==0)
//                 {
//                     a/=k;
//                     b/=k;
//                     common_factor*=k;
//                     break;
//                 }
//             }
//             int LCM=a*b*common_factor;
//             if(LCM<min)
//             {
//                 min=LCM;
//                 pfa=i;
//                 pfb=j;
//             }
//         }
//         printf("%d %d\n", pfa, pfb);
//     }
// }




// Thank You Zabi Sir!
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int T=1; T<=t; T++)
    {
        int n, min=1000000000, pfa, pfb;
        scanf("%d", &n);
        for(int i=1, j=n-1; i<=n/2 && j>=n/2; i++, j--)
        {
            int a=i, b=j, common_factor=1;
            for(int k=2; k<=i; k++)
            {
                if(a%k==0 && b%k==0)
                {
                    a/=k;
                    b/=k;
                    common_factor*=k;
                    if(a%k==0 && b%k==0)
                        k--;
                }
            }
            int LCM=a*b*common_factor;
            if(LCM<min)
            {
                min=LCM;
                pfa=i;
                pfb=j;
            }
        }
        printf("%d %d\n", pfa, pfb);
    }
}