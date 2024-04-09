#include<stdio.h>
int main(){
    int a;

      scanf("%d",&a);

      if(a>0){
      for(int i=1;i<=a;i++){
            int x=a%i;
        if(x==0){

            printf("%d\n",i);
        }
      }
      }
return 0;
}
