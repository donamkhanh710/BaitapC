#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a,&b);
    printf("tong 2 so bang: %d", a+b);
    printf("\nhieu 2 so bang: %d", a-b);
    printf("\ntich 2 so bang: %d", a*b);
    printf("\nthuong 2 so bang: %.2f", 1.0*a/b);
}
