#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
scanf("%d", &n);
int a[n];
int sum=0;
int b=0;
int c=0;
    for(int i=0; i<n; i++){
        printf("phan tu thu %d la : ", i+1);
        scanf("%d", &a[i]);
        sum+=a[i];
}printf("tong cua day so nguyen la: %d\n", sum);
for(int i=0; i<n; i++){
    if(a[i]>0){
        b+=a[i];
}
}printf("tong cac so nguyen duong trong day la: %d\n/", b);
for(int i=0; i<n; i++){
    if(a[i]<0){
        c+=a[i];
}
}printf("tong cac so nguyen am trong day la: %d", c);
}
