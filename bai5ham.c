#include <stdio.h>
#include <stdlib.h>

int chuyenhecoso(int num, int coso){
char a[64];
int b=0;
while(num>0){
    int c=num%coso;
    if(c<10){
        a[b++]=c+'0';
    }else{
    a[b++]=c-10+'A';
    }
    num/=coso;
}
printf("chuyen sang he co so %d: ", coso);
for(int i=b-1;i>=0;i--){
    printf("%c ", a[i]);
}
printf("\n");
}
int main(){
int num;
int coso;
scanf("%d", &num);
chuyenhecoso(num, 2);
chuyenhecoso(num, 8);
chuyenhecoso(num, 16);

}
