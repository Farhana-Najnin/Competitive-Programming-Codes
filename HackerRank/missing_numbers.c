#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int t;
    scanf("%d\n",&t);
    for(int i=0;i<t;i++)
    {
int s,a,b,c;
scanf("%d %d %d %d ",&s,&a,&b,&c);
int v=s-(a+b+c);
printf("%d\n",v);
    }
    return 0;
}

