
#include<stdio.h>

int main() {
    int n,x,y,z;
    scanf("%d%d%d%d",&n,&x,&y,&z);
    if(x<y){
        if(x<=z && z<=y) printf("Yes\n");
        else printf("No\n");
    }
    else{
        if(y<=z && z<=x) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
