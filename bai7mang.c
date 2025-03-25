#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int swap;
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
swap = a[i];
a[i]= a[j];
a[j]=swap;
}
}
}printf("mang sau khi sap xep theo thu tu tang dan la: ");
for(int i=0; i<n; i++){
    printf("%d ", a[i]);
}
}


