#include<stdio.h>
int prime(int p)
{
    if(p<2)
        return 0;
    for(int i=2;i<=p/2;++i)
        if(p%i==0)
            return 0;
    return 1;
}
int main()
{
    int i, count=0;
    for(i=100;i<=200;++i)
        if(prime(i)==1)
        {
            count++;
            printf("  %d", i);
            if(count%8==0)
                printf("\n");
        }
    return 0;
}
