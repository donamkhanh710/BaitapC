#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int i=a;
	while(i<=a){
		--i;
		if(a%i==0 && b%i==0){
			printf("%d\n", i);
			break;
		}
	}
	int c=a;
	while(c>=a){
		++c;
		if(c%a==0 && c%b==0){
			printf("%d", c);
			break;
		}
	}return 0;
}