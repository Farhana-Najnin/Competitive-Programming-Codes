#include<stdio.h>

int main(){
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a*2+b)>(c*2+d)){
    printf("Messi");
}
else if((a*2+b)<(c*2+d)){
    printf("Ronaldo");
}
else{
    printf("Equal");
}
return 0;
}
