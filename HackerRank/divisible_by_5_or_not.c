#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N;
       
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int mod=i%5;
        if(mod==0){
            printf("%d Yes\n",i);
        }
        else
        {
            printf("%d No\n",i);
        }
    }
    
    return 0;
}
