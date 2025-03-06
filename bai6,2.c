#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int sum=0;
	for(int i=1; i<=a; i++)
		if(a%i==0)
			sum+=i;
		if(sum==(2*a)){
		printf("%d la so hoan hao", a);
	}else{printf("%d khong phai so hoan hao", a);
	}
}
