#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
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
int max=a[0], ptln=0;
 for(int i=1; i<n; i++){
        if(a[i]>max){
            max=a[i];
            ptln=i;
        }
}printf("phan tu thu %d la phan tu lon nhat va bang: %d\n", ptln + 1, max);
int min=a[0], ptnn=0;
 for(int i=1; i<n; i++){
        if(a[i]<min){
            min=a[i];
            ptnn=i;
        }
}printf("phan tu thu %d la phan tu nho nhat va bang: %d", ptnn + 1, min);
return 0;
}
