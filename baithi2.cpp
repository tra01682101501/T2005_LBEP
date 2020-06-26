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
	float S=0;
	for(int i=1;i<n;i++){
		S+= (float)ary[i]/i;
		
	}
	printf("%f =",S);
}
