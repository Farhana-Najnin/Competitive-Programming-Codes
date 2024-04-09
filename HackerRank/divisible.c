#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N;
       
    scanf("%d",&N);
    if(N>=0){
        int mod=N%3;
        if(mod==0){
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    
    return 0;
}
