#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    char s[1000];
scanf("%s",s);
int cnt[26]={0};
for(int i=0;i<strlen(s);i++){
   /* char value = s[i];//int dorle ascii value print korbe
 printf("%c  ",value);*/
 int value=s[i]-'a';
cnt[value]++;
}


for(int i=0;i<26;i++){
    printf("%c - %d\n",i+'a',cnt[i]);//sob check korbe
}
return 0;
}
