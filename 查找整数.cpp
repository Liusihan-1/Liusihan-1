#include<stdio.h>
int main()
{
    int X,i,N,A;
    A=0;
    int a[20];
    scanf("%d %d",&N,&X);
    for(i=0;i<=N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==X)
        {
            printf("%d\n",i);
            A=1;
        }
    }
    if(A==0)
        printf("Not Found\n");
    return 0;
    
}
