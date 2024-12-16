#include<stdio.h>

int main() {
int t;
int Min=1000000;
int Max=-1000000;
int Sum=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
    int x;
    scanf("%d",&x);
    if(x<Min) Min=x;
    if(x>Max) Max=x;
    Sum+=x;
}
printf("%d %d %d\n",Min,Max,Sum);
}
