#include<stdio.h>
#include<math.h>
int main() {
  char a,b,c,d;
  scanf("%c%c %c%c",&a,&b,&c,&d);
  int dis1=abs(a-b);
  if(dis1>2){
    dis1=5-dis1;
  }

  int dis2=abs(c-d);
   if(dis2>2){
    dis2=5-dis2;
  }
  if(dis1==dis2){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}
