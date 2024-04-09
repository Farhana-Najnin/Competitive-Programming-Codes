#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N>9&&N<100){
      int a=N%10;
      int b=N/10;
      if(a%b==0 ||b%a==0)
      {
          printf("YES");
      }
      else{
        printf("NO");
      }
    }
      return 0;
}
