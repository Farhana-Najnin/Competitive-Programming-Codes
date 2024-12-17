#include<stdio.h>

int main()
{
    int r,c;

    while(1)
    {
        scanf("%d%d",&r,&c);
        if(r==0 & c==0) break;
        for(int i=0; i<r; i++)
        {
            if(i==0 || i==r-1)
            {
                for(int j=0; j<c; j++)
                {
                printf("#");
                }
            }
            else
            {
                for(int j=0; j<c; j++)
                {
                    if(j==0 || j==c-1) printf("#");
                    else printf(".");


                }
            }

            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

