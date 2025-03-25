#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    int a[n+1];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
    }return a[n];
}
int main(){
int n;
printf("dien so n : ");
scanf("%d", &n);
printf("so thu %d cua day fibonacci bang: ", n);
printf("%d",fibonacci(n));
}
