// bai 7

#include <stdio.h>

int main(){
	float sum=0;
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
	sum +=(1.0/i);
}
		printf("%.2f", sum);
		return 0;
	
}