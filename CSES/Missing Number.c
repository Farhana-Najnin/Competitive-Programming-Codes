#include<stdio.h>

int main(){
    int n;
  scanf("%d",&n);
  int a[n];
for (int i = 0; i < n; i++) {
    a[i] = 0;
}
int b;
long long sum=0;
long long cnt=0;
for(int i=0;i<n-1;i++){
        scanf("%d",&b);
        sum+=b;

}
for(int i=n;i>0;i--){
      //  if(i==0) printf("%d %d",i,a[i]);
   // else printf("%d %d\n ",i,a[i]);
cnt+=i;

}
printf("%d",cnt-sum);
return 0;
}
