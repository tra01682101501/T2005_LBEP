#include <stdio.h>
#include <math.h>
int main(){
	int a,b,C,D,E;

	printf("nhap so a=\n");
	scanf("%d",&a);
	printf("nhap so b=\n");
	scanf("%d",&b);
	if(a>=b){
		C=a/b;
		printf("ket qua cua a/b la : %d",C);
		E=a%b;
		printf(" so du la : %d",E);
	}else{
		D=a*b;
		printf("ket qua cua a*b la : %d",D);
		
	}
}
