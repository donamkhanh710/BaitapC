#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
    }
    }printf("ma tran 1 la: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
                printf("%d ", a[i][j]);
        }printf("\n");
    }
    // ma tran 2
    int p;
    scanf("%d", &p);
    int b[n][p];
    for(int j=0; j<n; j++){
        for(int l=0; l<p;l++){
            scanf("%d", &b[j][l]);
    }
    }
    printf("ma tran 2 la:\n");
    for(int j=0; j<n; j++){
        for(int l=0; l<p;l++){
                printf("%d ", b[j][l]);
    }
        printf("\n");
    }
    // tich 2 ma tran
    int c[m][p];
    for(int i=0; i<m; i++){
    for(int l=0; l<p; l++){
            c[i][l]=0;
    for(int j=0; j<n; j++){
        c[i][l]+=(a[i][j]*b[j][l]);
            }
        }
    }printf("tich 2 ma tran tren la :\n");
    for(int i=0; i<m; i++){
    for(int l=0; l<p; l++){
            printf("%d ", c[i][l]);
    }printf("\n");
}return 0;
}
