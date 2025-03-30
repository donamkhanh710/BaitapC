#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14
int main()
{
    float R;
    printf("nhap ban kinh: ");
    scanf("%f", &R);
    if(R<0){
        printf("khong hop le");
    }else{
    printf("\ndien tich hinh cau bang: %.4f", 1.0*4*Pi*R*R);
    printf("\nthe tich hinh cau bang: %.4f", 1.0*(4/3)*R*R*R*Pi);
}
}
