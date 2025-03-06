// bai 2
#include <stdio.h>

int main(){
	int num1;
	scanf("%d", &num1);
	for(int i=num1-1; i<num1; i--){
		if(num1%i ==0 && i>1){
			printf("khong phai la so nguyen to");
		}else{printf("la so nguyen to");
		break;
		}
	}
}