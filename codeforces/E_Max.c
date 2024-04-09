#include<stdio.h>
int main(){
int n;
 scanf("%d\n",&n);
 int a;
 int b=0;
for(int i=1;i<=n;i++){
    scanf("%d",&a);
    if (a>b){
        b=a;
}
    }
printf("%d",b);

}
