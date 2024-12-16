#include<stdio.h>

int main() {
int x,y;
char c;
while(1){

scanf("%d %c%d",&x,&c,&y);
//printf("x : %d c: %c y: %d \n",x,c,y);
if(c=='?')
{
    break;
    }
else if(c=='+')
    {
        printf("%d\n",x+y);
}
else if(c=='-')
    {
        printf("%d\n",x-y);
}
else if(c=='*') {
        printf("%d\n",x*y);
}
else if(c=='/') {
        printf("%d\n",x/y);
}

}
return 0;
}
