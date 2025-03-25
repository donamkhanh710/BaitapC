#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("nhap so hang va  so cot: ");
    scanf("%d%d",&n, &m);
    int a[n][m];
    for(int i=0; i<n; i++){
        printf("gia tri hang %d la : ", i+1);
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
    }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        printf("%d ", a[i][j]);
}printf("\n");
}
// ma tran 2
 int b[n][m];
    for(int i=0; i<n; i++){
        printf("gia tri hang %d la : ", i+1);
        for(int j=0; j<m; j++){
            scanf("%d", &b[i][j]);
    }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        printf("%d ", b[i][j]);
}printf("\n");
} int tong[n][m];
printf("tong 2 ma tran bang :\n");
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        tong[i][j]=a[i][j]+b[i][j];
        printf("%d ", tong[i][j]);
    }printf("\n");
}

}
