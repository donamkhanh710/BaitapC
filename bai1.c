#include <stdio.h>

int main(){
	int sum=0;
	int a[11];
	for(int i=1; i<11; i++){
		printf("nhap gia tri so tu nhien thu %d: ", i);
	scanf("%d", &a[i]);
}
for(int i=0; i<10; i++)
	sum+=a[i];
	printf("tong cua so tu nhien do la: %d", sum);
return 0;

}