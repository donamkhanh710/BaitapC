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
    }for(int i=0; i<n; i++){
    if(a[i]<0)
        a[i]=0;
        printf("%d ", a[i]);
    }
 return 0;
}
