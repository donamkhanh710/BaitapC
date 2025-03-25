#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int giaithua(int n){
        int tich=1;
        for(int i=1;i<=n;i++)
            tich*=i;
        return tich;
    }
int main(){
int n;
scanf("%d", &n);
int tich=giaithua(n);
printf("%d ", tich);
}
