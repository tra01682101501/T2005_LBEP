#include <stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap pt :\n");
		scanf("%d",&ary[i]);
	}
	int a;
	for(int i=0;i<n;i++){
		if(ary[i]%2==0){
			a=ary[n];
			break;
		}
	}
	if(a%2==0){
		for(int i=0;i<n;i++){
			if(ary[i]%2==0){
				a = ary[i];
			}
		}
		printf("so chan cuoi cung la : %d",a);
	}else{
		printf("no even number");
	}
		
	
}
