#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tong2matran(int tong[2][2]){
    int n=2 ,m=2;
    int a[2][2]={{1,2},{2,2}};
    int b[2][2]={{1,1},{2,3}};
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       tong[i][j]=a[i][j]+b[i][j];
}
}
}
int tich2matran(int tich[2][3]){
int g=2,h=2,p=3;
int a[2][2]={{1,2},{3,2}};
int b[2][3]={{1,2,4},{2,2,2}};
    for(int i=0;i<g;i++){
    for(int k=0;k<p;k++){
        tich[i][k]=0;
    for(int j=0;j<h;j++){
        tich[i][k]+=(a[i][j]*b[j][k]);
}
}
}
}
int main(){
    int tong[2][2];
    int n=2,m=2;
    printf("tong 2 ma tran: \n");
    tong2matran(tong);
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
        printf("%d ", tong[i][j]);
}
 printf("\n");
}
    int tich[2][3];
    int p=3,g=2,h=2;
    printf("tich 2 ma tran: \n");
    tich2matran(tich);
    for(int i=0;i<g;i++){
    for(int k=0;k<p;k++){
            printf("%d ", tich[i][k]);
    }
    printf("\n");
    }
}
