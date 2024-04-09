#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char s[1000];
scanf("%s",s);
int cnt[2]={0};
for(int i=0;i<strlen(s);i++){

 int value=s[i];
 if(value>64 && value<91){
cnt[0]++;
 }
 else{
cnt[1]++;
 }
}
for(int i=0;i<2;i++){
    printf("%d ",cnt[i]);
}
return 0;
}
