#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ngay, thang, nam;
    printf("nhap so ngay: ");
    scanf("%d", &ngay);
    printf("\nnhap so thang: ");
    scanf("%d", &thang);
    printf("\nnhap so nam: ");
    scanf("%d", &nam);
    if((nam%4==0 && nam%100==0 && thang==2 && ngay>29) || (thang==1,3,5,7,8,10,12 && ngay>31) || (thang==2,4,6,9,11 && ngay>30)){
        printf("ngay khong hop le");
    }else if(nam%4!=0 || nam%100!=0 && thang==2 && ngay>28){
    printf("ngay khong hop le");
    }
    else{
    printf("\n hom nay la ngay %d/%d/%d", ngay,thang,nam);
}
}
