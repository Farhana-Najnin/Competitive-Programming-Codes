#include<stdio.h>

int main() {
    long long  a,b,k;
	scanf("%lld%lld%lld",&a,&b,&k);
	if(k>a){
        k=k-a;
        if(k>b){
            printf("0 0");
        }
        else{
            printf("0 %lld",b-k);
        }
	}
	else{
        printf("%lld %lld",a-k,b);
	}
}
