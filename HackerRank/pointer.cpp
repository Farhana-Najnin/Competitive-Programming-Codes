#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void increment(int *a,int *b,int *c) {
    *a=*a + *b ;
    *b=abs(*c - *b);
}

int main() {
    int a,b;

    scanf("%d %d", &a,&b);
    int c=a;
    increment(&a,&b,&c);
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}
