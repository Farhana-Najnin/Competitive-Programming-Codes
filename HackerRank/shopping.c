#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N;
       
    scanf("%d",&N);
    
        for(int i=1;i<=N;i++){
        int mod=i%3;
        int m=i%7;
        if(mod==0&&m==0){
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}
