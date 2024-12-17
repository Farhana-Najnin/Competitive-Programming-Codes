#include<stdio.h>

int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int sum=0;
    for(int i=1; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    int an=m*n-sum;
    if(an<0)
    {
        printf("0\n");
    }
    else
    {
        if(an>k)
        {
            printf("-1");
        }
        else
        {
            printf("%d",an);
        }
    }
    return 0;
}
