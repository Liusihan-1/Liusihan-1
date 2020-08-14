#include<stdio.h>
struct info
{
    char name[10];
    int bir;
    char tel[20];
}io[10],tmp;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %s",io[i].name,&io[i].bir,io[i].tel);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(io[j].bir>io[j+1].bir)
            {
                tmp=io[j+1];
                io[j+1]=io[j];
                io[j]=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %s\n",io[i].name,io[i].bir,io[i].tel);
    }
    return 0;
}
