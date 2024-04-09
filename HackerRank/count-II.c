#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char s[1000];
scanf("%s",s);
int cnt=0;
for(int i=0;i<strlen(s);i++){

 int val=s[i]-'a';
 if(val==0 || val == 4 || val==8 || val ==14 || val==20 ){
cnt++;
 }
}
    printf("%d",cnt);

return 0;
}
