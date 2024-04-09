#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int row,col;
    scanf("%d %d",&row,&col);
int a[row] [col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       scanf("%d",&a[i][j]);
    }
   
}

int e=row-1;//row print



    for(int j=0;j<col;j++){
       printf("%d ",a[e][j]);
    }
    int c=col-1;//col print

printf("\n");

    for(int j=0;j<row;j++){
       printf("%d ",a[j][c]);
    }
return 0;

}
