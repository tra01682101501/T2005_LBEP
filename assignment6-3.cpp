#include <stdio.h>
int main(){
	int n,i,j,sld,max;
	int ary[i];
	printf("nhap n=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("nhap phan tu\n ");
		scanf("%d",&ary[i]);
	}
	

	while(i<=n){
		
		if(ary[i]>0){
			sld=0;
		
			do{
				sld++;
				i++;
			}
	
			while(i<=n && ary[i]>0);{
				max=0;
				if(sld>max){
				max=sld;
			
				i++;
				sld++;
				}	
				printf("so luong duong lien tiep nhieu nhat la :%d",max);
			}
		}	
		if(max<=0){
			printf("ko co so duong");
		}
	
	
	}

}
