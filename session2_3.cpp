#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,x1,x2,d;
	printf("nhap a=\n");
	scanf("%f",&a);
	printf("nhap b=\n");
	scanf("%f",&b);
	printf("nhap c=\n");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh co vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem");
			}
		}else{
			printf("phuong trinh co nghiem duy nhat : %f",(-c)/b);
		}
		
	}else{
		d=b*b-4*a*c;
		if(d>0){
			x1= (-b+sqrt(d))/(2*a);
			printf("phuong trinh co nghiem x1 la : %f",x1);
			x2= (-b-sqrt(d))/(2*a);
			printf(",phuong trinh co nghiem x2 la : %f",x2);
		}else{
			if(d==0){
				printf("phuong trinh co nghiem kep x1=x2= %f",(-b)/(2*a));
			}else{
				printf("phuong trinh vo nghiem");
			}
		}
	}
}
