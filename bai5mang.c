#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
int x;
printf("so gia tri cua day : ");
scanf("%d", &n);
if(n<=0){
        printf("day khong hop le");
        return 0;
    }
    int a[n];
    for(int i=0; i<n; i++){
        printf("phan tu thu %d la : ", i+1);
        scanf("%d", &a[i]);
}
printf("nhap x: ");
scanf("%d", &x);
int b;
int sum=0;
for(int i=0; i<n; i++){
if(a[i]==x){
    b=1;
    sum+=b;
}
}printf("%d xuat hien %d lan", x, sum);
return 0;
}

