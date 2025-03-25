#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        a[i][j] = 0;
    }
}
a[0][0] = 1;
a[0][n-1]=n;
a[n-1][n-1]=2*n-1;
a[n-1][0]=3*n-2;
for(int j = 1; j < n; j++) {
    a[0][j] = a[0][j-1] + 1;
    a[j][n-1]=a[j-1][n-1]+1;
}
for(int i=n-1;i>0;i--){
    a[n-1][i-1]=a[n-1][i]+1;
    a[i-1][0]=a[i][0]+1;
}

for(int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
    }printf("\n");
}
}
