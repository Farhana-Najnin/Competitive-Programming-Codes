#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
         char ar[1001];
fgets( ar,1001,stdin);

int cnt[3]={0};

for(int i=0;i<strlen(ar);i++){

 int value=ar[i];
 if(value==32){
    cnt[0]++;
 }
 else if(value>64 && value<91){
cnt[1]++;
 }
 else{
cnt[2]++;
 }
}
printf("Capital - %d\n",cnt[1]);
printf("Small - %d\n",cnt[2]);
printf("Spaces - %d",cnt[0]);
return 0;
}

