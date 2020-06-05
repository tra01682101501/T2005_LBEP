#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,S,P,C;
	printf("nhap so a=\n");
	scanf("%f",&a);
	printf("nhap so b=\n");
	scanf("%f",&b);
	printf("nhap so c=\n");
	scanf("%f",&c);
	if(a>0){
		if(b>0){
			if(c>0){
				if((a+b)>c){
					if((a+c)>b){
						if((b+c)>a){
							printf("day la 3 canh cua 1 tam giac");
							C= a+b+c;
							printf(",chu vi tam giac la : %f",C);
							P= C/2;
							S= sqrt(P*(P-a)*(P-b)*(P-c));
							printf(",dien tich tam giac la : %f",S);
						}else{
							printf("day khong phai 3 canh cua tam giac");
						}
					}else{
						printf("day khong phai 3 canh cua tam giac");
					}
				}else{
					printf("day khong phai 3 canh cua tam giac");
				}
			}else{
				printf("day khong phai 3 canh cua tam giac");
			}
		}else{
			printf("day khong phai 3 canh cua tam giac");
		}
	}else{
		printf("day khong phai 3 canh cua tam giac");
	}
}
