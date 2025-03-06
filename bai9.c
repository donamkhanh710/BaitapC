#include <stdio.h>

int main(){
	float sum=0;
	long long tich=1;
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
	tich *= i;
	sum +=(1.0/tich);
}
		printf("%lf", sum);
		return 0;
	
}