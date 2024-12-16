#include<stdio.h>

int main() {
int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("Case %d: %d\n",i+1,x+y);
}
}
