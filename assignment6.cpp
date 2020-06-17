#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu :\n");
		scanf("%d",&ary[i]);
    }
    int lecuoi = 0;
	for(int i=0 ; i<n ; i++ ){
		
       	if( ary[i]%2!=0)
       	{
       		
           	lecuoi = ary[i];           
            break;         
		
        }
		
           
    }  
    if(lecuoi %2==0){
		printf("mang nay ko co so le");
	}else{
		for(int i=0;i<n;i++){
			if( ary[i]%2 !=0){
				lecuoi = ary[i];
			}
		}
		printf("so le cuoi cung la : %d",lecuoi);
	}
}
