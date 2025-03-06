// bai 8

#include <stdio.h>

int main(){
	long long tich=1;
	int n;
	printf("nhap 1 so tu nhien: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
	tich*=i;
}
		printf("no co giai thua bang: %lld", tich);
		return 0;
	
}