#include<stdio.h>
int main()
{
    int r,c;

    while(1){
         scanf("%d%d",&r,&c);
         if(r==0 & c==0) break;
         for(int i=0;i<r;i++){
             if(i%2==0){
                for(int j=0;j<c;j++){
                if(j%2==0) printf("#");
                else printf(".");
            }
            printf("\n");
             }
             else{
                for(int j=0;j<c;j++){
                if(j%2==0) printf(".");
                else printf("#");
            }
            printf("\n");
             }

         }

    }
    return 0;
}

