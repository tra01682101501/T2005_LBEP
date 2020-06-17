#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu: \n");
		scanf("%d",&ary[i]);
	}
	int min=0;
	for(int i=0;i<n;i++){
		if(ary[i]>0){
			min = ary[i];
			break;
		}
	}if(min<=0){
		printf("ko co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(ary[i]>0 && ary[i]<min){
				min=ary[i];
			}
		}
		printf("so duong nho nhat la :%d",min);
	}
}
