#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={{1,2,3},{2,3,4},{3,4,5}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            printf("%d ", a[i][j]);
    printf("\n");
    }
}
