#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
int n;
scanf("%d\n",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
           int tmp=a[i];
           a[i]=a[j];
           a[j]=tmp;
        }
    }
}

        if(n%2==0){
            int m=n/2;

            int r=(n/2)+1;
            
            printf("%d %d\n",a[m-1],a[r-1]);
        }
        else{
                int p=(n+1)/2;
printf("%d\n",a[p-1]);
        }


return 0;
}