#include<stdio.h>

int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int d=a-(b+c);
if(d+c<b || b+d<c){
    printf("Yes\n");
}
else{
    printf("No\n");
}
return 0;
}
