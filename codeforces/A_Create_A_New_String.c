#include<stdio.h>
#include<string.h>
int main(){
char s[1000];
char t[1000];
gets(s);
gets(t);
int sl=strlen(s);
int tl=strlen(t);
printf("%d %d\n",sl,tl);


printf("%s %s",s,t);
return 0;
}
