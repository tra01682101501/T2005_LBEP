#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	printf("nhap c=\n");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("max : %d",a);
	    }else{printf("max : %d",c);
		}
	}else{
		if(b>c){
			printf("max : %d",b);
		}else{printf("max : %d",c);
		}
	}
}
