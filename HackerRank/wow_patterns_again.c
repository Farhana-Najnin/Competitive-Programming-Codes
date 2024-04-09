#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
int n,k=1,s;
scanf("%d",&n);
s= n-1;
for(int i=1;i<=n;i++){
              for(int m=1;m<=s;m++){
        printf(" ");


        }
        if(i%2==0){
    for(int j=1;j<=k;j++){
         printf("*");
    }
        }
        else{
             for(int j=1;j<=k;j++){
         printf("^");
    }
        }
    k=k+2;
    s--;
    printf("\n");
}
}

