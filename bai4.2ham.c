#include <stdio.h>
#include <stdlib.h>

void tong2matran(int m, int n, int tong[m][n]){
int a[m][n];
int b[m][n];
printf("nhap ma tran 1 :\n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    scanf("%d", &a[i][j]);
}
}
printf("nhap ma tran 2 :\n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    scanf("%d ",&b[i][j]);
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
        tong[i][j]=a[i][j]+b[i][j];
}
}
}
int main(){
int m,n;
scanf("%d %d", &m, &n);
int tong[m][n];
 tong2matran(m,n,tong);
 printf("tong 2 ma tran bang: \n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
        printf("%d ", tong[i][j]);
}
printf("\n");
}
}
