#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int cnt[2]={0};
for(int i=0;i<n;i++){
        int val=a[i]%2;
        cnt[val]++;
}
for(int i=0; i<=1;i++){
    printf("%d ",cnt[i]);
}

return 0;
}

