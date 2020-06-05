#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap so a=\n");
	scanf("%d",&a);
	printf("nhap so b=\n");
	scanf("%d",&b);
	printf("nhap so c=\n");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("min : %d",a);
		}else{
			printf("min : %d",c);
		}
	}else{
		if(b<c){
			printf("min : %d",b);
		}else{
			printf("min : %d",c);
		}
	}
}
