#include<stdio.h>

int main() {

while(1){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==0 && y==0) break;
    if(y<x) printf("%d %d\n",y,x);
    else printf("%d %d\n",x,y);

}
}
