#include<stdio.h>

	int main(){
		int n;
		printf("Moi ban nhap vao mot so nguyen");
		scanf("%d", &n);
		if(n % 3 == 0 && n % 5 == 0){
	
			printf(" chia het cho 3 va 5 ");
		} else if( n % 3 == 0){
			printf(" chia het cho 3");
		}else{
			printf(" chia het cho 5");	
		} 
	
		return 0;
	}
