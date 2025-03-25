#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    double a(double x, double y){
        return pow(x,y);
    }
    int main(){
    double x,y;
    printf("nhap x va y :");
    scanf("%lf %lf", &x, &y);
    double b = a(x,y);
    printf("ket qua x^y bang : %.2f", b);
    }
