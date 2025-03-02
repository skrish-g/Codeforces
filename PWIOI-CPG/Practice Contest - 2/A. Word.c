#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s", &s);
    int count_s=0, count_c=0, count_l=0;
    int i=0;
    while(s[i]!=0)
    {
        count_l++;
        if(s[i]>='a' && s[i]<='z')
            count_s++;
        else if(s[i]>='A' && s[i]<='Z')
            count_c++;
        i++;
    }
    if(count_s>=count_c)
        for(int j=0; j<count_l; j++)
        {
            if(s[j]>='A' && s[j]<='Z')
                s[j]=s[j]+32;
        }
    else
        for(int j=0; j<count_l; j++)
        {
            if(s[j]>='a' && s[j]<='z')
                s[j]=s[j]-32;
        }
    for(int j=0; j<count_l; j++)
    {
        printf("%c", s[j]);
    }
}