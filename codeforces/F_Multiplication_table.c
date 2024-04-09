#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n>=1&&n<=50){
for(int i=1;i<=12;i++){
    int mul=n*i;
    printf("%d * %d = %d\n",n,i,mul);
}
}
}
