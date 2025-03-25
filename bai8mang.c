#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int swap1;
    printf("so gia tri cua day: ");
    scanf("%d", &n);
    int a[n];
    if(n<=0){
        printf("day khong hop le");
        return 0;
    }
    for(int i=0; i<n; i++){
        printf("phan tu thu %d la : ", i+1);
        scanf("%d", &a[i]);
    }
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
 if(a[i]>a[j]){
swap1 = a[i];
a[i]= a[j];
a[j]=swap1;
}
}
}printf("mang sau khi sap xep theo thu tu tang dan la: ");
for(int i=0; i<n; i++){
    printf("%d ", a[i]);
}
// day so 2
    int m;
    int swap2;
    printf("\nso gia tri cua day: ");
    scanf("%d", &m);
    int b[m];
    if(m<=0){
        printf("day khong hop le");
        return 0;
    }
    for(int c=0; c<m; c++){
        printf("phan tu thu %d la : ", c+1);
        scanf("%d", &b[c]);
    }
for(int c=0; c<m-1; c++){
    for(int d=c+1; d<m; d++){
 if(b[c]>b[d]){
swap2 = b[c];
b[c]= b[d];
b[d]=swap2;
}
}
}printf("mang sau khi sap xep theo thu tu tang dan la: ");
for(int c=0; c<m; c++){
    printf("%d ", b[c]);
}
// sap xep 2 day
int f=0;
int i=0;
int c=0;
int e[n+m];
 while(i<n && c<m){
if(a[i]<=b[c]){
    e[f++]=a[i];
    ++i;
}else{
e[f++]=b[c];
++c;}
}while(i<n){
e[f++]=a[i++];
}
while(c<m){
e[f++]=b[c++];
}printf("\n2 day sau khi tron la: ");
for(int i=0; i<n+m; i++)
printf("%d ", e[i]);

}


