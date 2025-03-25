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
        printf("%d", a[i][j]);
}printf("\n");
}
}
