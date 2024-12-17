#include<stdio.h>

int main()
{
    int r,c;

    while(1){
         scanf("%d%d",&r,&c);
         if(r==0 & c==0) break;
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("#");
            }
            printf("\n");
         }
printf("\n");
    }
    return 0;
}
